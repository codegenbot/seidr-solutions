def mastermind(code, guess):
    code_count = [0] * 6
    for c in code:
        code_count[ord(c) - ord("B")] += 1

    black_pegs = sum(1 for i in range(4) if code[i] == guess[i])

    correct_counts = [min(count, guess.count(c)) for count, c in zip(code_count, "BOYYG")]
    white_pegs = sum(correct_counts) - black_pegs

    return str(black_pegs), str(white_pegs)