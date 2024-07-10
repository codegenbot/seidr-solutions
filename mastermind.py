def mastermind(code, guess):
    white_peg = sum(
        min(count1, count2) for count1, count2 in zip([code.count(char) for char in set(guess)], [guess.count(char) for char in set(guess)])
    )

    black_peg = sum(
        1 for char in set(guess) if guess.count(char) == code.count(char)
    )

    return str(white_peg), str(black_peg)