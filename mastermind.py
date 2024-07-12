code = input()
guess = input()

black_pegs = sum((c == g for c, g in zip(code, guess)))
white_pegs = sum(min(code.count(d), guess.count(d)) for d in set(code) | set(guess)) - black_pegs

print(white_pegs, black_pegs)