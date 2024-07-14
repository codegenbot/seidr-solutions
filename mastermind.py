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

    for i in range(4):
        if code[i] == guess[i]:
            black += 1
        elif guess_count[code[i]] > 0 and code_count[guess[i]] > 0:
            white += 1
            code_count[guess[i]] -= 1
            guess_count[code[i]] -= 1

    return str(white) + str(black)