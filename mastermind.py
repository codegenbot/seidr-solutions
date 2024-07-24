def mastermind(code, guess):
    code_count = collections.Counter(code)
    guess_count = collections.Counter(guess)
    white_peg = sum(min(count, guess_count[chr(i)]) for i in range(6))
    black_peg = sum(
        (count == 1 and guess_count[chr(i)] == 1) or (guess_count[chr(i)] > 0)
        for i, count in code_count.items()
    )
    return str(black_peg), str(white_peg)