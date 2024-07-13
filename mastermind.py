```
def mastermind(code, guess):
    code_counts = {c: 0 for c in set(code)}
    guess_counts = {c: 0 for c in set(guess)}

    black = 0
    white = 0

    for i in range(4):
        if code[i] == guess[i]:
            code_counts[code[i]] -= 1
            guess_counts[guess[i]] -= 1
            black += 1
        else:
            if code_counts.get(guess[i], 0) > 0:
                white += 1

    for c in set(code):
        white += min(0, code_counts[c] - 1)

    return str(white) + "\n" + str(black)