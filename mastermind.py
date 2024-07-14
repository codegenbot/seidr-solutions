```
def mastermind(code, guess):
    if len(code) != 4 or len(guess) != 4:
        return "00"

    for c in code + guess:
        if c not in "ROYO":
            return "00"

    black = 0
    white = 0

    code_count = {c: 0 for c in "ROYO"}
    for c in code:
        code_count[c] += 1

    for i, (c, d) in enumerate(zip(code, guess)):
        if c == d:
            black += 1
            code_count[c] -= 1

    for c in code:
        if c in guess and code_count[c] > 0:
            white += 1
            code_count[c] -= 1
    return str(white) + str(black)