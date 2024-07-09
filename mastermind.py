code = input("Enter the code: ")
guess = input("Enter a guess: ")

white = 0
black = 0

for i in range(4):
    if code[i] == guess[i]:
        black += 1
    elif guess.count(guess[i]) > 0:
        white += 1

print(f"{str(black)} black, {str(white - black)} white")