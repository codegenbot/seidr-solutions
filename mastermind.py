def mastermind(code, guess):
    code_count = [code.count(c) for c in set(code)]
    guess_count = [guess.count(c) for c in set(guess)]
    black_pegs = sum(min(a, b) for a, b in zip(code_count, guess_count))
    white_pegs = len(guess) - black_pegs
    return str(white_pegs), str(black_pegs)