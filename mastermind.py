from collections import Counter


def mastermind(code, guess):
    if len(code) != 4 or len(guess) != 4:
        return "Invalid input: both code and guess should be 4-character strings"

    for c in code + guess:
        if c not in "ARBYG":
            return "Invalid input: code can only contain 'ARBYG' characters"

    black_pegs = sum(
        1 for i in range(min(len(code), len(guess))) if code[i] == guess[i]
    )

    white_pegs = 0
    for c, count in Counter(guess).items():
        white_pegs += min(count, Counter(code)[c])

    return str(black_pegs) + "\n" + str(white_pegs)