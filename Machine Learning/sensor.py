import cv2
import pyttsx3
engine = pyttsx3.init()
voices = engine.getProperty('voices')
engine.setProperty('voice', voices[1].id)
engine.setProperty('rate', 150)
videoCaptureObject = cv2.VideoCapture(0)
q=1
i=1
def differ(baseline_image,i):
    while(True):
     ret,frame = videoCaptureObject.read()
     gray_frame=cv2.cvtColor(frame,cv2.COLOR_BGR2GRAY)
     gray_frame=cv2.GaussianBlur(gray_frame,(25,25),0)
     cv2.imshow('Capturing Video',frame)
     delta=cv2.absdiff(baseline_image,gray_frame)
     threshold=cv2.threshold(delta,35,255, cv2.THRESH_BINARY)[1]
     (contours,_)=cv2.findContours(threshold,cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)
     for contour in contours:
         if cv2.contourArea(contour) < 5000:
             continue
         (x, y, w, h)=cv2.boundingRect(contour)
         cv2.rectangle(frame, (x, y), (x+w, y+h), (0,255,0), 1)
         engine.say("Some Different object found in the camera")
         engine.runAndWait()
         s="detector"
         s=s+str(i)+".jpg"
         i=i+1
         cv2.imwrite(s,frame)
     if(cv2.waitKey(1) & 0xFF == ord('q')):
        videoCaptureObject.release()
        cv2.destroyAllWindows()

while(q==1):
    net,first = videoCaptureObject.read()
    baseline_image=cv2.cvtColor(first,cv2.COLOR_BGR2GRAY)
    baseline_image=cv2.GaussianBlur(baseline_image,(25,25),0)
    cv2.imshow('Set_Base',first)
    if(cv2.waitKey(1) & 0xFF == ord('q')):
        q=2
        cv2.destroyAllWindows()
        differ(baseline_image,i)
