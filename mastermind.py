def mastermind(code, guess):
    code_count = [0] * 6
    for c in code:
        code_count[ord(c) - ord("B")] += 1

    black_pegs = sum(1 for c in range(len(guess)) if code[c] == guess[c])

    white_pegs = sum(
        min(code_count[ord(c) - ord("B")], 1)
        for c in range(len(guess))
        if code_count[ord(c) - ord("B")] > 0 and code != guess[c]
    )

    return str(black_pegs), str(white_pegs)