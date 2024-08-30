def mastermind(code, guess):
    code_count = [0] * 6
    for c in code:
        code_count[ord(c) - ord("A")] += 1

    black_pegs = sum(
        [
            min(count, guess.count(c))
            for c, count in zip(map(chr, range(ord("A"), ord("F") + 1)), code_count)
        ]
    )

    white_pegs = len(guess)
    for i in range(4):
        if code[i] == guess[i]:
            white_pegs -= 1
        elif code[i] in guess:
            white_pegs -= 1

    return str(black_pegs) + "\n" + str(white_pegs)