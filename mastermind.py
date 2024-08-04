def mastermind(code, guess):
    white = sum(1 for c in zip(guess, code) if c[0] == c[1])
    black = sum(1 for i in range(4) for j in range(i + 1, 5) if code[j] == guess[i])
    return str(white), str(black)