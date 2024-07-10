def mastermind(code, guess):
    code_counts = {char: code.count(char) for char in set(code)}
    guess_counts = {char: guess.count(char) for char in set(guess)}

    black = 0
    white = 0

    for i in range(4):
        if code[i] == guess[i]:
            black += 1
        elif guess_counts.get(code[i], 0) > 0:
            white += 1

    return str(black) + "\n" + str(white)