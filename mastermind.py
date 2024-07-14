def mastermind(code, guess):
    white = 0
    black = 0
    code_count = {}
    for c in code:
        code_count[c] = code_count.get(c, 0) + 1

    for i, (c, d) in enumerate(zip(code, guess)):
        if c == d:
            if code.index(c) != i:
                white += 1
            else:
                black += 1
        else:
            if code_count.get(d, 0):
                white += 1

    return str(white) + "0" + str(black)