def mastermind(code, guess):
    code_count = [0]*6
    for c in code:
        code_count[ord(c)-48] += 1

    black = 0
    white = 0
    for i in range(4):
        if code[i] == guess[i]:
            black += 1
            code_count[ord(code[i])-48] -= 1
        elif code_count[ord(guess[i])-48] > 0:
            code_count[ord(guess[i])-48] -= 1
            white += 1

    return black, white