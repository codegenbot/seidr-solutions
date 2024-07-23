code = input()
guess = input()

black_pegs = {c for c, g in zip(code, guess) if c == g}
white_pegs = sum(min(code.count(c), guess.count(c)) for c in set(code) if c not in black_pegs)

print(len(white_pegs), len(black_pegs))