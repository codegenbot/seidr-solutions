from collections import Counter


def mastermind(code, guess):
    code_counts = Counter(code)
    guess_counts = Counter(guess)

    black_pegs = sum([1 for i in range(4) if code[i] == guess[i]])

    white_pegs = 0
    for color in set(code):
        white_pegs += min(code_counts[color], guess_counts[color]) - black_pegs

    return str(black_pegs) + "\n" + str(white_pegs)