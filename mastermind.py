def mastermind(code, guess):
    black = 0
    white = 0

    for i in range(6):
        code_count = code.count(chr(i + 65))
        guess_count = guess.count(chr(i + 65))

        if code[i] == guess[i]:
            black += 1
        else:
            white += min(code_count, guess_count) - (code[i] != guess[i])

    return str(black) + "\n" + str(white)