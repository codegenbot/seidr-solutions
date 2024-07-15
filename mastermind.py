code = input()
guess = input()

black_pegs = sum(c == g for c, g in zip(code, guess))

code_temp = ''.join(c if c != g else '' for c, g in zip(code, guess))
guess_temp = ''.join(c if c != g else '' for c, g in zip(guess, code))

code_temp_set = set(code_temp)
guess_temp_set = set(guess_temp)

white_pegs = sum(min(code_temp.count(c), guess_temp.count(c)) for c in code_temp_set)

print(white_pegs, black_pegs)