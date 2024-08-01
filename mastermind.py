def mastermind(code, guess):
    code_count = collections.Counter(code)
    guess_count = collections.Counter(guess)

    black_pegs = sum(min(count, guess.count(char)) for char, count in zip(guess, code))
    white_pegs = 4 - black_pegs
    return str(white_pegs) + "\n" + str(black_pegs)