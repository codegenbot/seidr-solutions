code = input()
guess = input()

black_pegs = sum(c1 == c2 for c1, c2 in zip(code, guess))
white_pegs = sum(min(code.count(c), guess.count(c)) - (c1 == c2) for c, c1, c2 in zip(set(code), code, guess))

print(white_pegs, black_pegs)