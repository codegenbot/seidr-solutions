code = input()
guess = input()

black_pegs = sum((c == g for c, g in zip(code, guess)))
code_checked = [False] * 4
guess_checked = [False] * 4

for i, (c, g) in enumerate(zip(code, guess)):
    if c == g:
        black_pegs += 1
        code_checked[i] = True
        guess_checked[i] = True
        
white_pegs = 0
for c, g in zip(code, guess):
    if c != g:
        if code.count(g) > guess.count(g) and not guess_checked[guess.index(g)]:
            white_pegs += 1
            guess_checked[guess.index(g)] = True
        elif not code_checked[code.index(c)]:
            white_pegs += 1
            code_checked[code.index(c)] = True

print(white_pegs, black_pegs)