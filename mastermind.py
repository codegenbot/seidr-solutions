def mastermind(code, guess):
    code_counts = [code.count(c) for c in set(code)]
    guess_counts = [guess.count(c) for c in set(guess)]

    black_pegs = sum([min(code_counts[i], guess_counts[i]) for i in range(6)])
    white_pegs = len(code) - black_pegs

    return str(white_pegs), str(black_pegs)