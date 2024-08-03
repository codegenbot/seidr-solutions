def mastermind(code, guess):
    code_chars = list(code)
    guess_chars = list(guess)
    white_pegs = sum(c1 == c2 for c1, c2 in zip(code_chars, guess_chars)) - sum(
        code_chars[i] == guess_chars[i] for i in range(4)
    )
    black_pegs = sum(code_chars[i] == guess_chars[i] for i in range(4))
    return str(black_pegs) + "\n" + str(white_pegs)