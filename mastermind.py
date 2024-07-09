code_chars = [0] * 6

code = input("Enter the Mastermind code:").upper()
guess = input("Enter your guess:").upper()

for c in code:
    if c in "ROYGBI":
        code_chars["ROYGBI".index(c)] += 1

black, white = 0, 0
code_count = [0] * 6
for i in range(4):
    if code[i] == guess[i]:
        black += 1
    elif code_count["ROYGBI".index(code[i])] > 0:
        code_count["ROYGBI".index(guess[i])] -= 1
        white += 1

white += sum([x for x in code_count if x > 0])

print(f"Black: {black}, White: {4 - black}")