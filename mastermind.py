def mastermind(code, guess):
    white = 0
    black = 0
    code_dict = {char: count for char, count in collections.Counter(code).items()}
    for i, c in enumerate(guess):
        if c == code[i]:
            black += 1
        elif code_dict.get(c, 0) > 0:
            white += 1
            code_dict[c] -= 1
    return str(black) + "\n" + str(white)