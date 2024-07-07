def mastermind(code, guess):
    white_peg = 0
    black_peg = 0
    code_count = [0] * 6
    for char in guess:
        code_count[ord(char) - ord("B")] += 1

    for i in range(4):
        if code[i] == guess[i]:
            black_peg += 1
        elif code_count[ord(guess[i]) - ord("B")] > 0:
            white_peg += 1
            code_count[ord(guess[i]) - ord("B")] -= 1

    return str(white_peg) + "\n" + str(black_peg)