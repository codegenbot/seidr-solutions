def mastermind(code, guess):
    code_count = [0] * 6
    white_pegs = 0
    black_pegs = 0

    for i in range(4):
        if code[i] == guess[i]:
            black_pegs += 1
        else:
            code_count[ord(guess[i]) - ord("A")] += 1

    for i in range(4):
        if code[i] != guess[i] and code_count[ord(code[i]) - ord("A")] > 0:
            white_pegs += 1
            code_count[ord(code[i]) - ord("A")] -= 1

    return str(black_pegs) + "\n" + str(white_pegs)