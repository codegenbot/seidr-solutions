```
code_chars = {'R': 0, 'O': 0, 'Y': 0, 'G': 0, 'B': 0, 'I': 0}

code = input("Enter the Mastermind code:").upper()
guess = input("Enter your guess:").upper()

for c in code:
    code_chars[c] += 1

black, white = 0, 0
for c, g in zip(code, guess):
    if c == g:
        black += 1
    elif c in code_chars and g in [k for k, v in code_chars.items() if v > 0]:
        white += 1

print(f"Black: {black}, White: {4 - black}")