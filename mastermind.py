def mastermind(code, guess):
    code_count = [0] * 6
    for c in code:
        code_count[ord(c) - ord("B")] += 1

    white = sum(min(count, guess.count(c)) for count, c in zip(code_count, "BOYGY"))

    black = sum(a == b for a, b in zip(code, guess))

    return str(black), str(4 - black + white)