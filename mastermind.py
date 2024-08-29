def mastermind(code, guess):
    code_chars = [c for c in code]
    guess_chars = [c for c in guess]
    black_pegs = sum(1 for a, b in zip(code_chars, guess_chars) if a == b)
    unique_code_chars = set(code_chars)
    white_pegs = sum(1 for c in unique_code_chars if code_chars.count(c) > guess_chars.count(c))
    return str(black_pegs), str(white_pegs)