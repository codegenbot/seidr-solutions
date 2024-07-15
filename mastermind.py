code = input()
guess = input()

black_pegs = sum(c == g for c, g in zip(code, guess))
code_used, guess_used = [], []
for c, g in zip(code, guess):
    if c == g:
        black_pegs += 1
        code_used.append(c)
        guess_used.append(g)
code = ''.join([c for c in code if c not in code_used])
guess = ''.join([g for g in guess if g not in guess_used])

white_pegs = sum(min(code.count(c), guess.count(c)) for c in set(code) & set(guess))

print(white_pegs, black_pegs)