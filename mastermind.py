code = input("Enter Mastermind code: ")
guess = input("Enter guess: ")
black, white = 0, 0
for i in range(4):
    if code[i] == guess[i]:
        black += 1
    elif code.count(guess[i]) > 0:
        white += 1