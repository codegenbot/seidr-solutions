```
def mastermind(code, guess):
    black = 0
    white = 0
    for char in set(code):
        if code.count(char) == guess.count(char):
            black += code.count(char)
        elif code.count(char) > 0:
            white += min(code.count(char), guess.count(char))
    return str(black) + "\n" + str(white)