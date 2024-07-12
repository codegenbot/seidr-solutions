code = input()
guess = input()

black_pegs = sum(c == g for c, g in zip(code, guess))
white_pegs = sum(min(code.count(c), guess.count(c)) for c in set(code) - set(g for g, c in zip(guess, code) if g == c)

print(white_pegs, black_pegs)