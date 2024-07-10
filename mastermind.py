def mastermind(code, guess):
    code_count = [0] * 6
    for c in code:
        code_count[ord(c) - ord("B")] += 1
    white = sum(
        min(count, guess.count(c))
        for c, count in zip(map(chr, range(ord("B"), ord("G") + 1)), code_count)
    )
    black = sum(code[i] == guess[i] for i in range(4))
    return str(white) + "\n" + str(black)