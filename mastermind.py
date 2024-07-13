def mastermind(code, guess):
    correct_chars = sum(c1 == c2 for c1, c2 in zip(code, guess))
    white_pegs = sum(1 for c in code if c in guess) - correct_chars
    return str(correct_chars), str(4 - correct_chars)