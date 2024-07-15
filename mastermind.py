code = input()
guess = input()

black_pegs = sum(c1 == c2 for c1, c2 in zip(code, guess))
white_pegs = sum(min(code.count(c), guess.count(c)) for c in set(code)) - black_pegs if white_pegs > 0 else 0

print(white_pegs, black_pegs)