def mastermind(code, guess):
    code_count = [0] * 6
    for c in code:
        code_count[ord(c) - 65] += 1

    white = 0
    black = 0
    for i in range(4):
        if code[i] == guess[i]:
            black += 1
            code_count[ord(code[i]) - 65] -= 1
        elif code_count[ord(guess[i]) - 65] > 0:
            white += 1
            code_count[ord(guess[i]) - 65] -= 1

    return str(black) + "\n" + str(white)