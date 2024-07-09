code_chars = [0] * 6

code = input("Enter the Mastermind code:").upper()
guess = input("Enter your guess:").upper()

for c in code:
    if c in "ROYGBI":
        code_chars["ROYGBI".index(c)] += 1

black, white = 0, 0
for i in range(4):
    if code[i] == guess[i]:
        black += 1
    elif code_chars["ROYGBI".index(code[i])] > 0:
        white += 1

print(f"Black: {black}, White: {4 - black}")