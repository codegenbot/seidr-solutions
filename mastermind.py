def mastermind(code, guess):
    code_set = set(code)
    guess_set = set(guess)
    black_pegs = 0
    white_pegs = 0

    for c in code:
        if c in guess and guess.index(c) == guess.find(c):
            black_pegs += 1
        elif c in guess:
            white_pegs += 1

    return str(black_pegs), str(white_pegs)