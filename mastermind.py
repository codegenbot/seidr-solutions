def mastermind(code, guess):
    code_count = [0] * 6
    for char in code:
        code_count[ord(char) - ord("B")] += 1
    black_pegs = sum(c == g and c > 0 for c, g in zip(code_count, code))
    white_pegs = len([c for c, g in zip(code_count, guess) if c > 0 and g != ""])
    return str(white_pegs), str(black_pegs)