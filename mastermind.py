def mastermind(code, guess):
    code_count = [0] * 6
    for c in code:
        code_count[ord(c) - ord("B")] += 1
    black_pegs = sum([c == g and c != "B" for c, g in zip(code, guess)])
    white_pegs = sum([min(code_count[ord(c) - ord("B")], guess.count(c)) for c in code])
    return str(white_pegs), str(black_pegs)