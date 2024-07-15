code = input()
guess = input()

black_pegs = sum(c == g for c, g in zip(code, guess))

code_temp = ''.join(c if c != g else '' for c, g in zip(code, guess))
guess_temp = ''.join(c if c != g else '' for c, g in zip(guess, code))

code_counts = {c: code_temp.count(c) for c in set(code_temp)}
guess_counts = {c: guess_temp.count(c) for c in set(guess_temp)}

white_pegs = sum(min(code_counts.get(c, 0), guess_counts.get(c, 0)) for c in set(code_temp))

print(white_pegs, black_pegs)