```
def mastermind(code, guess):
    code_counts = [0] * 6
    guess_counts = [0] * 6
    correct_pegs = 0

    for c, g in zip(code, guess):
        if c == g:
            correct_pegs += 1
        else:
            code_counts[ord(c) - ord("B")] += 1
            guess_counts[ord(g) - ord("B")] += 1

    black_pegs = correct_pegs
    white_pegs = sum(min(count, guesses) for count, guesses in zip(code_counts, guess_counts)) - black_pegs

    return str(black_pegs) + "\n" + str(4 - black_pegs)