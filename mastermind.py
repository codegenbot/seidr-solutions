def mastermind(code, guess):
    code_set = set(code)
    guess_count = [guess.count(c) for c in set(guess)]
    white_pegs = sum(min(code_set, guess).count(c) for c in set(guess))
    black_pegs = sum((code == g) and 1 or 0 for g in itertools.permutations(guess, 4))
    return str(white_pegs) + "\n" + str(black_pegs)