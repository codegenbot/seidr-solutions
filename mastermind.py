def mastermind(code, guess):
    code_counts = {c: code.count(c) for c in set(code)}
    white = 0
    black = 0

    for c in range(len(code)):
        if code[c] == guess[c]:
            black += 1
        elif code_counts.get(guess[c], 0) > 0:
            white += 1
            code_counts[guess[c]] -= 1

    return str(white), str(black)