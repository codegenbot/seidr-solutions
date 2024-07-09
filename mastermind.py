```
master_code = input("Enter the 4-character Mastermind code: ")
guess = input("Enter a guess (4 characters): ")

black = 0
white = 0

for i in range(4):
    if master_code[i] == guess[i]:
        black += 1
    elif master_code.count(guess[i]) > 0:
        white += 1