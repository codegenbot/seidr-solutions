def mastermind(code, guess):
    white = 0
    black = 0

    for char in set(guess): 
        if guess.count(char) == code.count(char): 
            black += 1
        else:
            white += 1

    return str(white) + "\n" + str(black)