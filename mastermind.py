def mastermind(code, guess):
    white = 0
    black = 0
    code_count = [0] * 6
    for i in range(4):
        if code[i] == guess[i]:
            black += 1
        else:
            code_char = code[i]
            code_count[ord(code_char) - ord('A')] += 1
            if code_count[ord(code_char) - ord('A')] < 1:
                white += 1
    return black, white