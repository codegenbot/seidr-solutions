code, guess = input(), input()
black_pegs = sum(c == g for c, g in zip(code, guess))
white_pegs = sum(min(code.count(c), guess.count(c)) - black for c, black in zip(code, guess)
print(white_pegs, black_pegs)