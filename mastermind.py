def mastermind(code, guess):
    code_count = [0] * 6
    for c in code:
        code_count[ord(c) - ord("B")] += 1
    black_pegs = sum(1 for c, g in zip(code, guess) if c == g)
    white_pegs = sum(min(code_count.count(c), guess.count(c)) for c in set(guess))
    return str(white_pegs) + "\n" + str(black_pegs)