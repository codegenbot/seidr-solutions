def mastermind(code, guess):
    code_count = [0] * 6
    for char in code:
        code_count[ord(char) - ord("A")] += 1

    white_pegs = sum(
        min(count, guess.count(char)) for count, char in zip(code_count, "ABCDEF")
    )

    black_pegs = sum(1 for a, b in zip(code, guess) if a == b)

    return str(black_pegs) + "\n" + str(4 - black_pegs)