code = input()
guess = input()

black_pegs = sum(c == g for c, g in zip(code, guess))
white_pegs = sum(min(code.count(c), guess.count(c)) - black_pegs for c, g in zip(code, guess))

print(max(0, white_pegs), black_pegs)