def mastermind(code, guess):
    code_counts = [0] * 6
    for c in code:
        code_counts[ord(c) - ord("B")] += 1
    white_pegs = sum(
        min(count, guess.count(c)) for count, c in zip(code_counts, "BOYYG")
    )
    black_pegs = sum(code == guess[i : i + 4] for i in range(0, 16, 4)).count(True)
    return str(black_pegs) + "\n" + str(4 - black_pegs)