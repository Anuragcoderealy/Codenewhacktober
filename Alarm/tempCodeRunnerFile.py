import datetime
from playsound import playsound

alarmH = int(input("Hour: "))
alarmM = int(input("Minute: "))
alarmAm = str(input("am/pm: "))

if alarmAm == "pm":
    alarmH += 12

while True:
    if alarmH == datetime.datetime.now().hour and alarmM == datetime.datetime.now().minute:
        print("Playing...")
        print("alarm ringing...")
        playsound("rain_alarm.mp3")
        break