def mastermind(code, guess):
    correct_colors = sum(c1 == c2 for c1, c2 in zip(code, guess))
    white_pegs = correct_colors - sum(
        c1 == g and c2 != c1
        for c1, c, c2 in itertools.zip_longest(code, guess, fillvalue="-")
    )
    return str(white_pegs), str(correct_colors)