```
whites = 0
blacks = 0
for c1, c2 in zip(code, guess):
    if c1 == c2:
        blacks += (c1 not in code[:guess.index(c2)].rpartition(c1)[0])
    else:
        whites += 1

return str(whites), str(blacks)