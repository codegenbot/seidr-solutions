from collections import Counter


def mastermind(code, guess):
    if (
        len(code) != 4
        or len(guess) != 4
        or not all(c in "123456" for c in code)
        or not all(c in "123456" for c in guess)
    ):
        return "Invalid input. Both code and guess should be 4-character strings consisting of 6 possible characters."

    code_freq = Counter(code)
    guess_freq = Counter(guess)

    black_pegs = sum(c == g for c, g in zip(code, guess))
    white_pegs = (
        sum(min(code_freq[c], guess_freq[c]) for c, g in zip(code, guess)) - black_pegs
    )

    return white_pegs, black_pegs