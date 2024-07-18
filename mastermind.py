code = input()
guess = input()

black_pegs = sum(c == g for c, g in zip(code, guess))
white_pegs = sum(min(code.count(c), guess.count(c)) > 0 for c, g in zip(code, guess)) - black_pegs

print(white_pegs, black_pegs)