def mastermind(code, guess):
    correct_place = sum(c1 == c2 for c1, c2 in zip(code, guess))
    correct_color = sum(
        sum(1 for a, b in zip(code, guess) if a == c and b == d)
        for c, d in set((c1, c2) for c1, c2 in zip(code, guess))
    )
    return str(correct_place), str(correct_color)