from collections import Counter


def mastermind(code, guess):
    if len(code) != 4 or len(guess) != 4:
        return "Invalid input: both code and guess should be 4-character strings"

    for c in code:
        if c not in "ARBYG":
            return "Invalid input: code can only contain 'ARBYG' characters"

    for g in guess:
        if g not in "ARBYG":
            return "Invalid input: guess can only contain 'ARBYG' characters"

    code_counts = Counter(code)
    guess_counts = Counter(guess)

    black_pegs = sum(
        1 for i in range(min(len(code), len(guess))) if code[i] == guess[i]
    )

    white_pegs = 0
    for c, count in guess_counts.items():
        white_pegs += min(count, code_counts.get(c, 0))

    return str(black_pegs) + "\n" + str(white_pegs)