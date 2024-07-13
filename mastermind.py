def mastermind(code, guess):
    code_count = [0] * 6
    guess_count = [0] * 6

    for char in code:
        code_count[ord(char) - ord("B")] += 1

    for i in range(4):
        if code[i] == guess[i]:
            black_peg = 1
        elif guess[i] in code[:i] or guess[i] in code[i+1:]:
            white_peg = 1
        else:
            pass

    return str(black_peg), str(white_peg)