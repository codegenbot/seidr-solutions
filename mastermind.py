def mastermind(code, guess):
    if len(code) != 4 or len(guess) != 4:
        return "00"

    for c in code + guess:
        if c not in "Royo":
            return "00"

    black = 0
    white = 0

    code_count = {"R": 0, "O": 0, "Y": 0}
    guess_count = {"R": 0, "O": 0, "Y": 0}

    for c in code:
        code_count[c] += 1
    for c in guess:
        guess_count[c] += 1

    for c in set(code):
        if code_count[c] == 4 and guess_count[c] == 4:
            black += 4
        elif code_count[c] > 0 and guess_count[c] > 0:
            white = min(white, 4 - (code_count[c] + guess_count[c]))
    return str(white) + str(black)