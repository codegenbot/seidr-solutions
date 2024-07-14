def mastermind(code, guess):
    if len(code) != 4 or len(guess) != 4:
        return "00"

    for c in code + guess:
        if c not in "Royo":
            return "00"

    white = 0
    black = 0

    code_count = {"R": 0, "O": 0, "Y": 0}
    for c in code:
        code_count[c] += 1

    for c, d in zip(code, guess):
        if c == d:
            black += 1
        else:
            white += min(code_count[c], 1)

    return str(white) + str(black)