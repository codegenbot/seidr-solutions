def mastermind(code, guess):
    code_counts = {c: code.count(c) for c in set(code)}
    white = 0
    black = 0

    for i in range(len(code)):
        if code[i] == guess[i]:
            black += 1
        elif code_counts.get(guess[i], 0) > 0:
            white += 1
            code_counts[guess[i]] -= 1

    return str(white), str(black)