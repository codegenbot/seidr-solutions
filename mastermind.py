code = input()
guess = input()

black_pegs = sum(c == g for c, g in zip(code, guess))
white_pegs = sum(min(code.replace(c, '', 1).count(c), guess.replace(c, '', 1).count(c)) for c in set(code))

white_pegs -= black_pegs

print(white_pegs, black_pegs)