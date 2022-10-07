import cv2
import mediapipe as mp
import pyautogui

cap = cv2.VideoCapture(0)
handDetector = mp.solutions.hands.Hands()
drawing_utils = mp.solutions.drawing_utils
screenWidth, screenHeight = pyautogui.size()

index_y = 0

while True:
    _, frame = cap.read()
    frame = cv2.flip(frame, 1)
    frameHeight, frameWidth, _ = frame.shape
    rgbFrame = cv2.cvtColor(frame, cv2.COLOR_BGR2RGB)
    output = handDetector.process(rgbFrame)
    hands = output.multi_hand_landmarks
    print(hands)

    if hands:
        for hand in hands:
            drawing_utils.draw_landmarks(frame, hand)
            landmarks = hand.landmark

            for id, landmark in enumerate(landmarks):
                x = int(landmark.x * frameWidth)
                y = int(landmark.y * frameHeight)

                if id == 8:
                    cv2.circle(img = frame, center = (x, y), radius = 10, color = (0, 255, 255))
                    index_x = (screenWidth / frameWidth) * x
                    index_y = (screenHeight / frameHeight) * y
                    pyautogui.moveTo(index_x, index_y)
                if id == 4:
                    cv2.circle(img = frame, center = (x, y), radius = 10, color = (0, 255, 255))
                    thumb_x = (screenWidth / frameWidth) * x
                    thumb_y = (screenHeight / frameHeight) * y
                    print('Difference: ', abs(index_y - thumb_y))

                    if abs(index_y - thumb_y) < 20:
                        pyautogui.click()
                        pyautogui.sleep(1)

    cv2.imshow('Virtual Mouse', frame)
    cv2.waitKey(1)
