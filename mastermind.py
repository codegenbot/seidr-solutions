code = input()
guess = input()

black_pegs = sum(c == g for c, g in zip(code, guess))

code_remaining = [c for c in code if c not in guess]
guess_remaining = [g for g in guess if g not in code]

white_pegs = sum(min(code_remaining.count(c), guess_remaining.count(c)) for c in set(code_remaining))

print(white_pegs, black_pegs)