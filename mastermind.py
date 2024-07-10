def mastermind(code, guess):
    white = 0
    black = 0

    for c in range(len(code)):
        if code[c] == guess[c]:
            black += 1
        elif code.index(guess[c]) != c:
            white += 1

    return str(white), str(black)