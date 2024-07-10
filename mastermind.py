def mastermind(code, guess):
    white = 0
    black = 0
    code_counts = {c: code.count(c) for c in set(code)}
    guess_counts = {c: guess.count(c) for c in set(guess)}

    for i in range(len(code)):
        if code[i] == guess[i]:
            black += 1
            code_counts[guess[i]] -= 1
            guess_counts[guess[i]] -= 1
        elif guess_counts.get(guess[i], 0) > 0:
            white += 1
            guess_counts[guess[i]] -= 1

    for c in set(code):
        black += min(code_counts[c], guess_counts.get(c, 0))

    return str(white), str(black)