code = input()
guess = input()

black_pegs = sum(c == g for c, g in zip(code, guess))

code = ''.join(c if c != g else '' for c, g in zip(code, guess))
guess = ''.join(c if c != g else '' for c, g in zip(guess, code))

white_pegs = sum(min(code.count(c), guess.count(c)) for c in set(code)) - black_pegs

print(white_pegs, black_pegs)