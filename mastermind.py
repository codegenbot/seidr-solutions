def get_pegs(code, guess):
    white = 0
    black = 0
    code_dict = {c: i for i, c in enumerate(set(code))}
    for i, c in enumerate(guess):
        if c == code[i]:
            black += 1
        elif c in code:
            white += 1
    return str(black) + "\n" + str(white)