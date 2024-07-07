def mastermind(code, guess):
    code_count = [0] * 6
    for char in code:
        code_count[ord(char) - ord("B")] += 1

    black_peg = sum(1 for i in range(4) if code[i] == guess[i])
    white_peg = sum(
        min(code_count[ord(c) - ord("B")], 1)
        for c in guess
        if c != guess[i]
        for i in range(4)
    )

    return str(white_peg) + "\n" + str(black_peg)