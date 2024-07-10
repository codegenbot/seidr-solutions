def mastermind(code, guess):
    white = 0
    black = 0
    code_count = [0] * 6
    for i in range(4):
        if code[i] == guess[i]:
            black += 1
        else:
            code_index = ord(guess[i]) - ord('0')
            if code_index < 6 and code[code_index] == guess[i]:
                black += 1
            elif code_count[ord(guess[i]) - ord('0')] > 0:
                white += 1
            code_count[ord(guess[i]) - ord('0')] += 1
    return str(black) + "\n" + str(white)