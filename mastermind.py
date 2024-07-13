def mastermind(code, guess):
    white_pegs = sum(1 for a, b in zip(guess, code) if a == b)
    black_pegs = len(
        [a for i, (a, b) in enumerate(zip(guess, code)) if a == b and a != ""]
    )
    return str(black_pegs), str(white_pegs)