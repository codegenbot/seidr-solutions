code_counts = {c: 0 for c in "ROYGBI"}
code = input("Enter the Mastermind code:").upper()
guess = input("Enter your guess:").upper()

for c in code:
    if c in "ROYGBI":
        code_counts[c] += 1

black, white = 0, 0
for c, g in zip(code, guess):
    if c == g:
        black += 1
    elif g in code_counts and code_counts[g]:
        white += 1

print(f"Black: {black}, White: {4 - black}")