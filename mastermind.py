def mastermind(code, guess):
    code_count = [0] * 6
    for c in code:
        code_count[ord(c) - ord("B")] += 1

    guess_count = [0] * 6
    for c in guess:
        guess_count[ord(c) - ord("B")] += 1

    black_pegs = sum(code[i] == guess[i] for i in range(4))
    white_pegs = sum(
        min(code_count[ord(c) - ord("B")], guess_count[ord(c) - ord("B")])
        for c in guess
        if code[c] != guess[c]
    )

    return str(white_pegs) + "\n" + str(black_pegs)