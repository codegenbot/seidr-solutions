def mastermind(code, guess):
    white = 0
    black = 0
    code_chars = [char for char in code]
    guess_chars = [char for char in guess]

    for i in range(len(guess)):
        if code_chars[i] == guess_chars[i]:
            black += 1
            code_chars[i], guess_chars[i] = "", ""

    for char in guess_chars:
        if char in code_chars:
            white += 1
            code_chars[code_chars.index(char)] = ""

    return str(white) + "\n" + str(black)