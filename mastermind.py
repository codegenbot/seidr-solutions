def mastermind(code, guess):
    code_chars = [c for c in code]
    guess_chars = [c for c in guess]
    white_pegs = sum(
        1
        for c in guess_chars
        if c in code_chars and code_chars.index(c) != guess_chars.index(c)
    )
    black_pegs = sum(1 for c, c2 in zip(guess_chars, code_chars) if c == c2)
    return str(black_pegs) + "\n" + str(white_pegs)