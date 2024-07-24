def mastermind(code, guess):
    code_counts = {c: code.count(c) for c in set(code)}
    guess_counts = {c: guess.count(c) for c in set(guess)}

    black_pegs = sum(min(code_counts[c], guess_counts[c]) for c in set(guess))
    white_pegs = len(set(guess)) - black_pegs

    return str(black_pegs) + "\n" + str(white_pegs)