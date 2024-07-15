code = input()
guess = input()

black_pegs = sum(c1 == c2 for c1, c2 in zip(code, guess))
white_pegs = sum(min(code.count(c), guess.count(c)) if c1 != c2 else 0 for c, c1, c2 in zip(code, code, guess))

print(white_pegs, black_pegs)