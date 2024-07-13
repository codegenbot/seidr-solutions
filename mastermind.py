def mastermind(code, guess):
    code_count = [0] * 6
    for c in code:
        code_count[ord(c) - ord("A")] += 1

    white_pegs = sum(min(4, count) for count in code_count)

    black_pegs = sum(1 for i in range(4) if code[i] == guess[i])

    return str(black_pegs) + "\n" + str(white_pegs)