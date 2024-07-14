```
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

    code_copy = list(code)
    guess_copy = list(guess)

    for c, d in zip(code, guess):
        if c == d:
            black += 1
            code_copy.remove(c)
            guess_copy.remove(d)
        elif code_count[c] > 0 and code_count[c] <= guess_count[d]:
            white += 1
            code_count[c] = 0

    return str(white) + str(black)