def mastermind(code, guess):
    code_count = [0] * 6
    for char in code:
        code_count[ord(char) - ord("A")] += 1

    white_pegs = sum(
        min(count, guess.count(char)) for count, char in zip(code_count, "ABCDEF")
    )
    black_pegs = sum(1 for i, j in enumerate(guess) if code[i] == j)

    return str(black_pegs) + "\n" + str(4 - black_pegs + white_pegs)