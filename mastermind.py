def mastermind(code, guess):
    white = 0
    black = 0
    code_count = [0] * 6
    for i in range(4):
        if code[i] == guess[i]:
            black += 1
        else:
            if code_count[ord(code[i]) - ord('A')] < 1:
                white += 1
            code_count[ord(code[i]) - ord('A')] += 1
    return str(black) + "\n" + str(white)