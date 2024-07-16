def mastermind(code, guess):
    black = 0
    white = 0

    code_count = [0] * 6
    for i in range(4):
        if guess[i] == code[i]:
            black += 1
        else:
            code_count[ord(guess[i]) - ord("A")] += 1

    for i in range(6):
        white += min(
            code_count[i], (code.count(chr(i + ord("A"))) - code.count(str(code[i])))
        )

    return str(black) + "\n" + str(white)