def mastermind(code, guess):
    white = 0
    black = 0
    code_counts = [0] * 6
    for i in range(4):
        if code[i] == guess[i]:
            black += 1
        else:
            code_counts[ord(guess[i]) - ord("A")] += 1
    for i in range(4):
        if code[i] != guess[i] and code_counts[ord(code[i]) - ord("A")] > 0:
            white += 1
            code_counts[ord(code[i]) - ord("A")] -= 1
    return black, white