import random
 
max = 10
secretNumber = random.randrange(1, max)
 
userResponse = int(input("Inserisci un numero: "))
 
if userResponse == secretNumber:
    print("You guessed! \^o^/")
elif userResponse < secretNumber:
    print("The number is too low, you lost. ╯︿╰")
else:
    if userResponse > max:
        print("You have entered a number that is out of range.")
    else:
        print("The number is too high, you lost. ＞﹏＜")
