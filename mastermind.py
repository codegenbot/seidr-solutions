code = input()
guess = input()

black_pegs = sum(c == g for c, g in zip(code, guess))
white_pegs = sum(min(code.count(c), guess.count(c)) if c not in zip(code, guess) else 0 for c in set(code))

white_pegs -= black_pegs
print(white_pegs, black_pegs)