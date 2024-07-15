```
def mastermind(code, guess):
    black = sum(1 for a, b in zip(guess, code) if a == b)
    if black == 0:  
        return "0\n0"
    white = len([x for x in guess if x in code]) - black
    return str(black) + "\n" + str(min(white, 4 - black))