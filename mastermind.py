def mastermind(code, guess):
    code_count = [code.count(char) for char in set(code)]
    guess_count = [guess.count(char) for char in set(guess)]

    white_peg = sum(
        min(count1, count2) for count1, count2 in zip(code_count, guess_count)
    )

    black_peg = sum(
        min(a, b)
        for a, b in zip(
            [code.count(char) if code.count(char) > 0 else 0 for char in set(guess)],
            [guess.count(char) for char in set(guess)],
        )
    )

    return str(white_peg), str(black_peg)