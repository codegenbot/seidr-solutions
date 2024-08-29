def mastermind(code, guess):
    code_count = [0] * 6
    for c in code:
        code_count[ord(c) - 65] += 1
    black_pegs = sum([min(code_count[ord(c) - 65], guess.count(c)) for c in guess])
    white_pegs = len(guess) - black_pegs
    return str(white_pegs), str(black_pegs)