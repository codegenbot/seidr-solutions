def mastermind(code, guess):
    code_counts = {c: code.count(c) for c in set(code)}
    correct_colors = {c: code.count(c) for c in set(guess)}

    white_pegs = sum(
        min(code_counts[i], correct_colors[c]) for i, c in enumerate(guess)
    )
    black_pegs = sum(
        1 for i, c in enumerate(guess) if code_counts[c] == 1 and guess[i] == c
    )

    return str(black_pegs) + "\n" + str(4 - black_pegs)