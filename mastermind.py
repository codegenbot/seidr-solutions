def mastermind(code, guess):
    black = 0
    white = 0
    code_chars = [c for c in code]
    guess_chars = [c for c in guess]

    for i in range(4):
        if code_chars[i] == guess_chars[i]:
            black += 1
        elif guess_chars.count(code_chars[i]) > 0:
            white += 1

    return str(white) + "\n" + str(black)