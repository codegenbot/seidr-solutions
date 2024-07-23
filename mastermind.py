def mastermind(code, guess):
    code_freq = {c: code.count(c) for c in set(code)}
    guess_freq = {c: guess.count(c) for c in set(guess)}

    black_pegs = sum(1 for c in guess if c in code and c == code[code.index(c)])
    white_pegs = sum(min(code_freq.get(c, 0), guess_freq.get(c, 0)) for c in set(guess))

    return str(black_pegs) + "\n" + str(white_pegs)