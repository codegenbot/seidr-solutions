def mastermind(code, guess):
    code_chars = [c for c in code]
    white = sum(c in code_chars for c in guess)
    black = sum(
        (guess.index(c1) < index) or (index == 0) 
        and code_chars.count(c1) > 1
        for index, (c1, c2) in enumerate(zip(code, guess), start=1)
    )
    return str(white), str(black)