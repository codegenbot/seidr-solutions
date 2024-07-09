code = input("Enter the code: ")
guess = input("Enter a guess: ")

black = 0
white = 0

code_counts = {c: code.count(c) for c in set(code)}
guess_counts = {c: guess.count(c) for c in set(guess)}

for i in range(4):
    if code[i] == guess[i]:
        black += 1
    elif code_counts.get(guess[i], 0) > 0:
        white += 1

print(f"{str(black)} black, {str(white - black)} white")