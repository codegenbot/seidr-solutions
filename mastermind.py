```
def mastermind(code, guess):
    if len(code) != 4 or len(guess) != 4:
        return "00"

    for c in code + guess:
        if c not in "Royo":
            return "00"

    black = sum(1 for a, b in zip(code, guess) if a == b)
    white = sum(min(code_count.get(c, 0), guess.count(c)) for c in set(guess))
    return str(white) + str(black)