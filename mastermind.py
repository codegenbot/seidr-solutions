def mastermind(code, guess):
    black = 0
    white = 0
    code_chars = list(code)
    guess_chars = list(guess)

    for i in range(4):
        if code_chars[i] == guess_chars[i]:
            black += 1
            code_chars[i] = "X"
            guess_chars[i] = "X"

    for char in code_chars:
        if char != "X" and guess_chars.count(char) > 0:
            white += 1
            code_chars[code_chars.index(char)] = "X"
            guess_chars[guess_chars.index(char)] = "X"

    return str(white), str(black)