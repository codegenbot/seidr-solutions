def mastermind(code, guess):
    black_peg = 0
    white_peg = 4 - sum(1 for a, b in zip(guess, code) if a == b)

    for i in range(4):
        correct_colors = sum(1 for c in [a, b] for a, b in zip(code, guess) if a == b)

    return str(white_peg) + "\n" + str(black_peg)