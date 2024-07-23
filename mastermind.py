code = input()
guess = input()

black_pegs = sum(c == g for c, g in zip(code, guess))
white_pegs = sum(min(code.count(c), guess.count(c)) for c in set(code))
white_pegs -= black_pegs
white_pegs = max(white_pegs, 0)

print(white_pegs, black_pegs)