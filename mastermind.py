def mastermind(code, guess):
    code_count = [0] * 6
    for c in code:
        code_count[ord(c) - ord("B")] += 1

    black_pegs = sum(1 for a, b in zip(guess, code) if a == b)
    white_pegs = sum(
        min(code_count[ord(a) - ord("B")], code.count(b)) for a, b in zip(guess, code)
    )
    return str(white_pegs), str(black_pegs)