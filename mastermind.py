for c in code:
    if c in "ROYGBI":
        code_chars["ROYGBI".index(c)] += 1

black, white = 0, 0
for c, g in zip(code, guess):
    if c == g:
        black += 1
    elif "ROYGBI".index(c) == "ROYGBI".index(g):
        black += 1
    else:
        white += 1

print(f"Black: {black}, White: {4 - black}")