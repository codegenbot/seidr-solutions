def mastermind(code, guess):
    black_peg = 0
    white_peg = 0
    correct_colors = {}

    for i in range(4):
        if code[i] == guess[i]:
            black_peg += 1
        else:
            if guess[i] not in correct_colors:
                correct_colors[guess[i]] = True

    wrong_place_matches = sum(
        [
            c in code[:i] or c in code[i + 1 :]
            for i, c in enumerate(guess)
            if c != code[i]
        ]
    )

    white_peg = 4 - black_peg - len(correct_colors)

    return str(white_peg) + "\n" + str(black_peg)