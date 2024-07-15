code = input()
guess = input()

black_pegs = sum(c == g for c, g in zip(code, guess))

white_pegs = 0
code_chars_counted = set()
guess_chars_counted = set()

for c, g in zip(code, guess):
    if c == g:
        continue
    if c not in code_chars_counted:
        white_pegs += min(code.count(c), guess.count(c))
        code_chars_counted.add(c)
    
    if g not in guess_chars_counted:
        white_pegs += min(code.count(g), guess.count(g))
        guess_chars_counted.add(g)

print(white_pegs, black_pegs)