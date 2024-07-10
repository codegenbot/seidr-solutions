def mastermind(code, guess):
    black = 0
    white = [min(code.count(char), guess.count(char)) for char in set(guess)]
    for i in range(4):
        if code[i] == guess[i]:
            black += 1
        else:
            white[code.find(guess[i])] -= 1

    return str(black) + "\n" + " ".join(map(str, white))