def mastermind(code, guess):
    code_count = [0] * 6
    for c in code:
        code_count[ord(c) - ord("A")] += 1
    white = sum(min(count, guess.count(c)) for count, c in zip(code_count, "ABCEF"))
    black = sum([c1 == c2 and 1 or 0 for c1, c2 in zip(code, guess)])
    return str(black), str(white)