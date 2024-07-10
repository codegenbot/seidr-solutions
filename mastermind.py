def mastermind(code, guess):
    code_freq = {char: code.count(char) for char in set(code)}
    guess_freq = {char: guess.count(char) for char in set(guess)}

    black = 0
    white = 0

    for i in range(4):
        if code[i] == guess[i]:
            black += 1
        elif code_freq.get(guess[i], 0) > 0:
            white += 1

    return str(black) + "\n" + str(white)