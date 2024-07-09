```
code = input("Enter Mastermind code: ")
guess = input("Enter guess: ")
black, white = 0, 0
code_count = [0]*6
for i in range(4):
    if code[i] == guess[i]:
        black += 1
    elif code_count[ord(guess[i])-65] > 0:
        white += 1
        code_count[ord(guess[i])-65] -= 1