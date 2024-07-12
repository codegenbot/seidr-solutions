def mastermind(code, guess):
    black_pegs = sum(c == g for c, g in zip(code, guess))
    white_pegs = sum(min(code.count(c), guess.count(c)) for c in set(code))
    white_pegs -= black_pegs
    return white_pegs, black_pegs


code = input()
guess = input()
white_pegs, black_pegs = mastermind(code, guess)
print(white_pegs)
print(black_pegs)