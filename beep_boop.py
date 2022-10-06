#! python3
# Windows compatible

import winsound
import time

duration = 300  # milliseconds
freq = 0  # Hz

start_sound = 50
end_sound = 30000
step_sound = 100

print("Best regards to you!")
time.sleep(2)

for i in range(start_sound, end_sound, step_sound):
    freq = i
    print("Current frequency: ", freq)
    winsound.Beep(freq, duration)
