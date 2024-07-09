code_chars = [0] * 6

code = input("Enter the Mastermind code:").upper()
guess = input("Enter your guess:").upper()

for c in code:
    if c in "ROYGBI":
        code_chars["ROYGBI".index(c)] += 1

black, white = 0, 0
for c, g in zip(code, guess):
    if c == g:
        black += 1
    elif c in "ROYGBI" and g in code_chars["ROYGBI".index(c)]:
        white += 1

print(f"Black: {black}, White: {4 - black}")