code = input()
guess = input()

black_pegs = sum(c == g for c, g in zip(code, guess))
white_pegs = sum(min(code.count(c), guess.count(c)) for c in set(code)) - black_pegs
if white_pegs < 0:
    white_pegs = 0
    white_pegs += sum(min(code.count(c), guess.count(c)) for c in set(code) if code.count(c) >= 1 and guess.count(c) >= 1) - white_pegs

print(white_pegs, black_pegs)