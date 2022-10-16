from datetime import *
from playsound import playsound


class Alarm:

    def __init__(self, h, m):
        self.h = h
        self.m = m

    def check_time(self):
        if ((self.h not in range(0, 12)) and (self.m not in range(0, 60))):
            return False
        else:
            return True

    def alarm_func(self):
        while True:
            if self.h == datetime.now().hour and self.m == datetime.now().minute:
                print("Playing...")
                print("Alarm ringing...")
                playsound("rain_alarm.mp3")
                break

    def compute_rem_time(self):
        now = datetime.now()
        curr_time = now.strftime("%H : %M : %S")
        x = curr_time.split(':')
        rem_h = self.h - int(x[0])
        rem_m = self.m-int(x[1])
        rem_s = 60 - int(x[2])
        print("Alarm set to go off in {}:{}:{}".format(rem_h, rem_m, rem_s))


print("Set Alarm (in 24 hour format)/n")
alarmH = int(input("Hour: "))
alarmM = int(input("Minute: "))

alarm = Alarm(alarmH, alarmM)
if(alarm.check_time() == False):
    print("Wrong Input !")
else:
    alarm.compute_rem_time()
    alarm.alarm_func()
