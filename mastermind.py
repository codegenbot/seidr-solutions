def mastermind(code, guess):
    white = 0
    black = 0
    code_count = [0] * 6
    for c in code:
        code_count[ord(c) - ord("A")] += 1
    for i in range(4):
        if code[i] == guess[i]:
            black += 1
        elif str(code[i]) in str(guess):
            white += 1
    return str(black), str(white)