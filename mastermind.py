code, guess = input(), input()
black_pegs = sum(c == g for c, g in zip(code, guess))
white_pegs = sum(min(code.count(c), guess.count(c)) for c in set(code) if c in guess and c != g) - black_pegs
print(max(0, white_pegs), black_pegs)