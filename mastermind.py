def mastermind(code, guess):
    white = 0
    black = 0
    for c in code:
        code_dict = {char: count for char, count in collections.Counter([c]).items()}
        if c == guess[0]:
            black += 1
        elif code_dict.get(guess[0], 0) > 0:
            white += 1
            code_dict[guess[0]] -= 1
        guess = guess[1:]
    return str(black) + "\n" + str(white)