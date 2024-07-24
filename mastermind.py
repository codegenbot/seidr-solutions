def mastermind(code, guess):
    black_pegs = 0
    white_pegs = 0

    code_counts = {c: 0 for c in "ABCDEF"}
    guess_counts = {c: 0 for c in "ABCDEF"}

    correct_colors = 0

    for i in range(4):
        if code[i] == guess[i]:
            black_pegs += 1
            correct_colors += 1
        elif guess_counts[guess[i]] < 4:
            code_counts[code[i]] += 1
            guess_counts[guess[i]] += 1

    white_pegs = sum([min(code_counts.get(c, 0), 4 - guess_counts.get(c, 0)) for c in "ABCDEF"]) - black_pegs + correct_colors

    return str(black_pegs) + "\n" + str(white_pegs)