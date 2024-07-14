def mastermind(code, guess):
    if len(code) != 4 or len(guess) != 4:
        return str(0) + "\n" + str(0)

    for c in code + guess:
        if c not in "ARBYG":
            return str(0) + "\n" + str(0)

    code_freq = {c: code.count(c) for c in set(code)}
    guess_freq = {c: guess.count(c) for c in set(guess)}

    black_pegs = sum((code_freq[c] if c == g else 0) for c, g in zip(code, guess))
    white_pegs = sum(min(freq, guess_freq.get(c, 0)) for c, freq in code_freq.items())

    return str(black_pegs) + "\n" + str(white_pegs)