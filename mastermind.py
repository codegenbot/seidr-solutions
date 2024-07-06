```
def mastermind(code, guess):
    white = 0
    black = 0

    for c in set(guess):
        while True:
            code_index = code.find(c)
            if code_index == -1:
                break
            if code_index == guess.index(c):
                black += 1
                break
            else:
                white += 1
                break
    return black, white