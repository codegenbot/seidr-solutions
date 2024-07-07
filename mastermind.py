def mastermind(code, guess):
    white_peg = 0
    black_peg = 0
    code_freq = [0] * 6
    for i in range(4):
        if code[i] == guess[i]:
            black_peg += 1
        elif code_freq[ord(guess[i]) - ord("A")] > 0:
            white_peg += 1
            code_freq[ord(guess[i]) - ord("A")] -= 1
        else:
            code_freq[ord(guess[i]) - ord("A")] += 1

    return str(white_peg) + "\n" + str(black_peg)