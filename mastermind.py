def mastermind(code, guess):
    code_count = [0] * 6
    for c in code:
        code_count[ord(c) - ord("A")] += 1

    black_pegs = sum(
        min(count, guess.count(c))
        for count, c in zip(code_count, "ABCDEFGHIJKLMNOPQRSTUVWXYZ")
        if count > 0 and c == guess[ord(c) - ord("A")]
    )
    white_pegs = (
        sum(
            min(count, guess.count(c))
            for count, c in zip(code_count, "ABCDEFGHIJKLMNOPQRSTUVWXYZ")
        ) - black_pegs
    )
    return str(black_pegs), str(white_pegs)