def mastermind(code, guess):
    black = 0
    for i in range(4):
        if code[i] == guess[i]:
            black += 1
        else:
            code_count = [0] * 6
            guess_count = [0] * 6

    white = sum(min(code_count[ord(c) - ord("A")], guess_count[ord(g) - ord("A")]) for c, g in zip(code, guess)) if black == 4 else 0
    return str(black) + "\n" + str(white)