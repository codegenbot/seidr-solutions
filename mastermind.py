def mastermind(code, guess):
    white = 0
    black = 0
    c_count = [0] * 6
    g_count = [0] * 6

    for char in code:
        if char == "B":
            c_count[5] += 1
        else:
            c_count[int(char) - 65] += 1

    for i, char in enumerate(guess):
        if char == "B":
            g_count[5] += 1
        else:
            g_count[int(char) - 65] += 1

    for i in range(6):
        white += min(c_count[i], g_count[i])

    for i in range(4):
        if code[i] == guess[i]:
            black += 1

    return str(white) + "\n" + str(black)