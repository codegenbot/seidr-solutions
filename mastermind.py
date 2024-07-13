def mastermind(code, guess):
    code_count = [0] * 6
    for char in code:
        code_count[ord(char) - ord("A")] += 1
    white_peg = 0
    black_peg = 0
    for i in range(4):
        if code[i] == guess[i]:
            black_peg += 1
        elif str(code[i]) in str(guess):
            white_peg += 1
    return str(white_peg), str(black_peg)