def mastermind(code, guess):
    code_count = [0] * 6
    for c in code:
        code_count[ord(c) - ord("B")] += 1

    white = 0
    black = 0
    for i, c in enumerate(guess):
        if code[i] == c:
            black += 1
        elif str(code).count(str(c)) > 0:
            white += 1

    return str(white) + "\n" + str(black)