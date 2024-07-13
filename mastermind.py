```
def mastermind(code, guess):
    black = sum(
        c1 == c2 and i1 == i2
        for ((i1, c1), (i2, c2)) in zip(enumerate(code), enumerate(guess))
    )
    white = 0
    for i, c in enumerate(guess): 
        if c == code[i]: 
            black += 1 
        elif c in code: 
            white += 1
    black_possibilities = sum(1 for c in set(code) if guess.count(c)) - black
    white = max(0, black_possibilities - black)
    return str(black) + "\n" + str(4 - black + white)