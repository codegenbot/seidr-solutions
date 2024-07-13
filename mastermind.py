def mastermind(code, guess):
    white = 0
    black = 0
    code_counts = [0]*6
    for i in range(4):
        if code[i] == guess[i]:
            black += 1
        else:
            if str(code[i]) not in code_counts:
                code_counts[ord(str(code[i]))-48] += 1
            if str(code[i]) in str(guess):
                white += 1

    return black, white