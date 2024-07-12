code = input()
guess = input()

black_pegs = sum(c_g == c_c for c_g, c_c in zip(guess, code))
white_pegs = sum(min(code.count(c_g), guess.count(c_g)) for c_g in set(guess))

print(white_pegs - black_pegs, black_pegs)