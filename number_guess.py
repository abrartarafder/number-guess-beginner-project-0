import random


secret = random.randint(1,10)

print("WELCOME TO RANDOM NUMBER GUESSING GAME")
print("****************************************************")
for i in range(10000000):

    guess = int(input("Enter a number between 1 - 10 for guessing: "))

    if guess == secret:
        print("You have won the game congratulations!")
        break
    
    if guess < secret:
        print("Low number -- guess higher")


    if guess > secret:
        print("High number -- guess lower")
