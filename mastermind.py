code = input()
guess = input()

black_pegs = sum(min(code.count(c), guess.count(c)) for c, g in zip(code, guess))
correct_guesses = sum(min(code.count(c), guess.count(c)) for c in set(code))
white_pegs = correct_guesses - black_pegs

print(max(white_pegs, 0), black_pegs)