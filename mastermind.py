def mastermind(code, guess):
    correct = sum(c1 == c2 and c1 != "X" for c1, c2 in zip(code, guess))
    wrong_place = sum(
        (c1 == "X" and c2 != "X") or (c1 != "X" and c2 == c1)
        for c1, c2 in zip(code, guess)
    )
    return str(correct), str(wrong_place)