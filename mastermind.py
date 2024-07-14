def mastermind(code, guess):
    if len(code) != 4 or len(guess) != 4:
        return str(0) + "\n" + str(4)

    code_count = [0] * 6
    for c in code:
        code_count[ord(c) - ord("B")] += 1

    white_pegs = sum(1 for a, b in zip(code, guess) if a != "0" and a == b)
    black_pegs = sum(1 for a, b in zip(code, guess) if a == b)

    return str(black_pegs) + "\n" + str(4 - black_pegs)