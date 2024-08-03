def mastermind(code, guess):
    code_counts = [0] * 6
    white_pegs = 0
    black_pegs = 0

    for i in range(4):
        if code[i] == guess[i]:
            black_pegs += 1
        else:
            code_counts[ord(guess[i]) - ord("A")] += 1

    for i in range(6):
        white_pegs += min(code_counts[i], int(code.count(chr(i + ord("A")))))

    return str(black_pegs) + "\n" + str(white_pegs)