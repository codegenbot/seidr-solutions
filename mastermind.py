def mastermind(code, guess):
    code_chars = [char for char in code]
    guess_chars = [char for char in guess]

    white_pegs = sum(
        1
        for c in guess_chars
        if c in code_chars and code_chars.index(c) != guess_chars.index(c)
    )
    black_pegs = sum(1 for c in guess_chars if c == code_chars[guess_chars.index(c)])

    return str(black_pegs) + "\n" + str(white_pegs)