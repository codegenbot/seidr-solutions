code = input()
guess = input()

black_pegs = sum(c == g for c, g in zip(code, guess))
white_pegs = sum(min(code.count(x), guess.count(x)) for x in set(code))

print(white_pegs - black_pegs, black_pegs)