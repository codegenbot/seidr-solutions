code = input()
guess = input()

black_pegs = sum(c == g for c, g in zip(code, guess))
correct_guesses = sum(min(code.count(c), guess.count(c)) for c in set(code) if c != guess[code.index(c)])
white_pegs = correct_guesses - black_pegs

print(max(white_pegs - black_pegs, 0), black_pegs)