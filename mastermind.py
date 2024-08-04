def mastermind(code, guess):
    white = 0
    black = 0
    for i in range(4):
        if code[i] == guess[i]:
            black += 1
        else:
            correct_color = sum(x == code[i] for x in guess)
            white += correct_color - (
                black if code[i] in guess[:i] or code[i] in guess[i + 1 :] else 0
            )
    return str(white) + "\n" + str(black)