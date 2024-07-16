def mastermind(code, guess):
    code_counts = [0] * 6
    for c in code:
        code_counts[ord(c) - ord("B")] += 1

    black_pegs = sum(1 for i in range(len(code)) if code[i] == guess[i])

    white_pegs = (
        sum(min(count, guess.count(c)) for count, c in zip(code_counts, "BOYYG"))
        - black_pegs
    )

    return str(black_pegs) + "\n" + str(4 - black_pegs)