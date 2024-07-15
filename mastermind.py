code = input()
guess = input()

black_pegs = sum(c == g for c, g in zip(code, guess))

code_tmp = [c for c, g in zip(code, guess) if c != g]
guess_tmp = [g for c, g in zip(code, guess) if c != g]

white_pegs = sum(min(code_tmp.count(c), guess_tmp.count(c)) for c in set(code_tmp))

print(white_pegs, black_pegs)