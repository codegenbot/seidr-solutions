def mastermind(code, guess):
    black = 0
    white = 0

    for char in code:
        if char == guess[3 - guess.index(char)]:
            black += 1
        elif guess.count(char) > 0:
            white += 1

    return str(white) + "\n" + str(black)