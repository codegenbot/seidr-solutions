def mastermind(code, guess):
    white = 0
    black = 0
    code_chars = [char for char in code]
    guess_chars = [char for char in guess]

    for i in range(4):
        if code_chars[i] == guess_chars[i]:
            black += 1
            code_chars[i] = ""
            guess_chars[i] = ""

    for char in set(guess_chars):
        if guess_chars.count(char) <= code_chars.count(char):
            white += 1

    return str(white) + "\n" + str(black)