def mastermind(code, guess):
    blacks = 0
    whites = 0
    for c, g in zip(code, guess):
        if c == g: 
            blacks += 1
        elif g in code:
            whites += 1
    return str(blacks) + ' ' + str(whites)