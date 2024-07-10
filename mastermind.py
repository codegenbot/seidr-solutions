def mastermind(code, guess):
    matching_chars = sum(c1 == c2 for c1, c2 in zip(code, guess))
    black = matching_chars
    white = sum(1 for c in code if c in guess and c != guess[i])
    return str(white), str(black)