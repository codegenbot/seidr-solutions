def mastermind(code, guess):
    code_count = [0] * 6
    for c in code:
        code_count[ord(c) - ord("B")] += 1

    black_pegs = sum(1 for i in range(4) if code[i] == guess[i])

    white_pegs = (
        sum(min(count, guess.count(c)) for count, c in zip(code_count, "BOYYG"))
        - black_pegs
    )

    return str(black_pegs), str(white_pegs)