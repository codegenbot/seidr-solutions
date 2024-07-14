def mastermind(code, guess):
    if len(code) != 4 or len(guess) != 4:
        return str(0), str(0)

    for c in code + guess:
        if c not in " ABCDEF":
            return str(0), str(0)

    code_count = Counter(code)
    guess_count = Counter(guess)

    white = sum(min(count, guess_count[c]) for c, count in zip(code, guess))

    black = sum((code_count[c] == 1 and guess_count[c] == 1) for c in code if code.index(c) == i)
    return str(white), str(len(black))