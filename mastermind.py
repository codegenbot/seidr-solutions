def mastermind(code, guess):
    code_counts = [0] * 6
    for char in code:
        code_counts[ord(char) - ord("B")] += 1
    white_pegs = sum(
        min(count, guess.count(char)) for count, char in zip(code_counts, "BOYYG")
    )
    black_pegs = sum(1 for i, j in enumerate(guess) if code[i] == j)
    return str(black_pegs), str(4 - black_pegs + white_pegs)