code = input()
guess = input()

black_pegs = sum(c == g for c, g in zip(code, guess))
white_pegs = sum(min(code.count(c), guess.count(c)) for c in set(guess)) - black_pegs

print(max(white_pegs, 0), black_pegs)