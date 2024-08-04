def mastermind(code, guess):
    code_count = [0] * 6
    for char in code:
        code_count[ord(char) - ord("B")] += 1
    white_pegs = sum(min(c, g.count(char)) for c, char in zip(code_count, "BOYYGB"))
    black_pegs = sum(c == g.count(char) for c, char in zip(code_count, "BOYYGB"))
    return str(white_pegs), str(black_pegs)