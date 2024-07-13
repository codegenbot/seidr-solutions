def mastermind(code, guess):
    blacks = sum(1 for c, g in zip(code, guess) if c == g)
    guess_freq = {c: 0 for c in set(guess)}
    for c, g in zip(code, guess):
        if c == g:
            guess_freq[c] += 1
    whites = sum(1 for c, count in guess_freq.items() if count > 0 and code.count(c) < count)
    return str(blacks) + ' ' + str(whites)