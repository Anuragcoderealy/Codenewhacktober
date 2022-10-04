import random

rand = random.randint(1,100)

print("Guess a number between 1 to 100")
num = int(input())
count = 1

while(True):
    if(num==rand):
        print(f"\nCongratulations! You are the winner.\nYou have taken {count} turns.")
        break
    
    elif(num>rand):
        count+=1
        print(f"Please enter a lower number than {num}")
        num = int(input())
        
    else:
        count+=1
        print(f"Please enter a higher number than {num}")
        num = int(input())
