code = input()
guess = input()

black_pegs = sum(c == g for c, g in zip(code, guess))
white_pegs = sum(min(code.count(c), guess.count(c)) for i, c in enumerate(code) if c != guess[i])

white_pegs -= black_pegs

print(max(0, white_pegs), max(0, black_pegs))