from collections import Counter


def mastermind(code, guess):
    if len(code) != 4 or len(guess) != 4:
        return str(0) + "\n" + str(0)

    for c in code:
        if c not in "ARBYG":
            return str(0) + "\n" + str(0)

    for g in guess:
        if g not in "ARBYG":
            return str(0) + "\n" + str(0)

    if len(set(code)) != 4 or len(set(guess)) != 4:
        return str(0) + "\n" + str(0)

    code_counts = Counter(code)
    guess_counts = Counter(guess)

    black_pegs = sum(
        1 for i in range(min(len(code), len(guess))) if code[i] == guess[i]
    )

    white_pegs = 0
    for c, count in guess_counts.items():
        white_pegs += min(count, code_counts.get(c, 0))

    return str(black_pegs) + "\n" + str(white_pegs)