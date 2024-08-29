def mastermind(code, guess):
    code_count = [0] * 6
    for c in code:
        code_count[ord(c) - ord("A")] += 1

    white_pegs = 0
    black_pegs = 0
    for i in range(4):
        if code[i] == guess[i]:
            black_pegs += 1
        elif code_count[ord(guess[i]) - ord("A")] > 0:
            code_count[ord(guess[i]) - ord("A")] -= 1
            white_pegs += 1

    return str(white_pegs) + "\n" + str(black_pegs)