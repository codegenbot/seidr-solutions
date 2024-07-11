def mastermind(code, guess):
    code_counts = {c: code.count(c) for c in set(code)}
    guess_counts = {c: guess.count(c) for c in set(guess)}

    white = 0
    black = 0

    for c in range(len(code)):
        if code[c] == guess[c]:
            black += 1
            code_counts[code[c]] -= 1
            guess_counts[guess[c]] -= 1
        elif code_counts.get(guess[c], 0) > 0:
            white += 1
            code_counts[guess[c]] -= 1

    return str(white), str(black)