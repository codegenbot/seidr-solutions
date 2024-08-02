def mastermind(code, guess):
    code_count = [0] * 6
    for c in code:
        code_count[ord(c) - 65] += 1
    black = sum(
        min(count, guess.count(c))
        for c, count in zip(map(chr, range(65, 71)), code_count)
    )
    white = max(0, len(guess) - black)
    return str(black), str(white)