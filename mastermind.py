code = input()
guess = input()

black_pegs = sum(c == g for c, g in zip(code, guess))
white_pegs = sum(min(code.count(c), guess.count(c)) for c in set(code))

white_pegs -= black_pegs  # Exclude black pegs from white pegs count
black_pegs -= white_pegs  # Correct black pegs count

print(white_pegs, black_pegs)