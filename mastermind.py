def mastermind(code, guess):
    code_count = collections.Counter(code)
    guess_count = collections.Counter(guess)

    white_peg = sum((code_count & guess_count).values())
    black_peg = sum(min(code_count[c], guess_count[c]) for c in set(guess))

    return str(black_peg) + "\n" + str(white_peg)