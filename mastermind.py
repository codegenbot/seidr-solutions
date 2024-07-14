def mastermind(code, guess):
    code_counts = {c: code.count(c) for c in set(code)}
    guess_counts = {c: guess.count(c) for c in set(guess)}

    black_pegs = sum(1 for c, count in zip(guess, code) if c == code[count-1])
    white_pegs = sum(min(count - 1, code_counts.get(c, 0)) for c, count in guess_counts.items() if c != code[count-1])

    return str(black_pegs) + "\n" + str(white_pegs)