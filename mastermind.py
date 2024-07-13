def mastermind(code, guess):
    code_counts = [code.count(c) for c in set(code)]
    guess_counts = [guess.count(c) for c in set(guess)]
    white_peg = sum(
        min(count1, count2) for count1, count2 in zip(code_counts, guess_counts)
    )
    black_peg = sum(a == b and 1 for a, b in zip(code, guess))
    return str(white_peg), str(black_peg)