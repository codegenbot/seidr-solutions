code = input()
guess = input()

black_pegs = sum((c == g and (code.__setitem__(i, '-') or guess.__setitem__(i, '-')) for i, (c, g) in enumerate(zip(code, guess)))
white_pegs = sum(min(code.count(c), guess.count(c)) for c in set(code) if c != '-')

print(max(0, white_pegs), max(0, black_pegs))