def mastermind(code, guess):
    code_count = {c: 0 for c in 'ACGT'}
    for c in code:
        code_count[c] += 1
    guess_count = {c: 0 for c in 'ACGT'}
    for c in guess:
        guess_count[c] += 1

    black = 0
    white = 0
    for i, c in enumerate(code):
        if c == guess[i]:
            black += 1
        elif code_count.get(c, 0) > 0:
            white += 1

    return str(white) + "\n" + str(black)