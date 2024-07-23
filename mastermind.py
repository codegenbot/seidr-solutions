code = input()
guess = input()

black_pegs = sum(c == g for c, g in zip(code, guess))
black_pegs_positions = [i for i, (c, g) in enumerate(zip(code, guess)) if c == g]

white_pegs = sum(min(code.count(c), guess.count(c)) for c in set(code) if c not in black_pegs_positions)
white_pegs -= black_pegs

print(white_pegs, black_pegs)