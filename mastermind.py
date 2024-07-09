```
def mastermind(code, guess):
    blacks = sum(1 for c1, c2 in zip(code, guess) if c1 == c2)
    whites = 0
    for c in set(guess): 
        whites += min(code.count(c), guess.count(c))
    return str(blacks) + ', ' + str(whites - blacks)