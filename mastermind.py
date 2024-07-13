```
def mastermind(code, guess):
    white = 0
    black = 0

    for i in range(4):
        if code[i] == guess[i]:
            black += 1
        elif guess.count(guess[i]) > 0 and code.count(guess[i]) > 1:
            white += 1

    return str(white) + "\n" + str(black)