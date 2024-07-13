def mastermind(code, guess):
    white = 0
    black = 0
    code_counts = [0] * 6
    guess_counts = [0] * 6

    for i in range(4):
        if code[i] == guess[i]:
            black += 1
        else:
            code_counts[ord(code[i]) - ord("A")] += 1
            guess_counts[ord(guess[i]) - ord("A")] += 1

    for i in range(6):
        white += min(code_counts[i], guess_counts[i])

    return black, white