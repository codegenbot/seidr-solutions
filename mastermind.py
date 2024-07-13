```
def mastermind(code, guess):
    blacks = 0
    whites = 4
    for c, g in zip(code, guess):
        if c == g: 
            blacks += 1
            whites -= 1
    return str(blacks) + ' ' + str(whites)