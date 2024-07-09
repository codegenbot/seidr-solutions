code = input("Enter the code: ")
guess = input("Enter a guess: ")

white = 0
black = 0

code_counts = {}
guess_counts = {}

for i in range(4):
    if code[i] == guess[i]:
        black += 1
    else:
        color = guess[i]
        if code_counts.get(color, 0) < guess_counts.get(color, 0):
            white += 1

print(f"{str(black)} black, {str(white)} white")