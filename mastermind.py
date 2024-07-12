code, guess = input(), input()
black_pegs = sum(c == g for c, g in zip(code, guess))
white_pegs = sum(min(code.count(c), min(code.count(c), guess.count(c)) if c not in zip(code, guess)) for c in set(guess))
print(white_pegs, black_pegs)