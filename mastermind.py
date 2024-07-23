def mastermind(code, guess):
    code_counts = [0] * 6
    for c in code:
        code_counts[ord(c) - ord("B")] += 1

    correct_colors = {c: code.count(c) for c in set(guess)}
    white_pegs = sum(min(code_counts[i], correct_colors[c]) for i, c in enumerate("BOYYY"))
    black_pegs = sum(1 for i, c in enumerate("BOYYY") if code_counts[i] == correct_colors[c])

    return str(black_pegs) + "\n" + str(4 - black_pegs)