def mastermind(code, guess):
    black = 0
    white = 0
    code_count = [0]*6
    for i in range(4):
        if code[i] == guess[i]:
            black += 1
        else:
            code_count[ord(code[i]) - ord('W')] += 1
            if code_count[ord(code[i]) - ord('W')] < 4 and code[i] == str(guess)[i]:
                white += 1
    return str(black) + "\n" + str(white)