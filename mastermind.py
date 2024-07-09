from collections import Counter

code_chars = [0] * 6

code = input("Enter the Mastermind code:").upper()
guess = input("Enter your guess:").upper()

for c in code:
    if c in "ROYGBI":
        code_chars["ROYGBI".index(c)] += 1

black, white = 0, 0
code_counts = Counter(code)
guess_counts = Counter(guess)

for c, g in zip(code, guess):
    if c == g:
        black += 1
    elif code_counts[g] > 0:
        white += 1
        code_counts[g] -= 1

print(f"Black: {black}, White: {max(0, (4 - black) - sum(code_counts.values()))}")