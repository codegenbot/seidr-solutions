```
def mastermind(code, guess):
    code_counts = [0] * 6
    for c in code:
        code_counts[ord(c) - ord("B")] += 1

    white_pegs = sum((min(count, guess.count(c)) for count, c in zip(code_counts, "BOYYG")))
    black_pegs = sum(((c == g) and (code.index(c) == guess.index(g))) for c, g in zip(code, guess)))

    return str(black_pegs) + "\n" + str(4 - black_pegs)