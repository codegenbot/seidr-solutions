def mastermind(code, guess):
    white = sum(c1 == c2 for c1, c2 in zip(guess, code))
    freq_code = {c: code.count(c) for c in set(code)}
    freq_guess = {c: guess.count(c) for c in set(guess)}
    black = sum(
        1 for c, _ in zip(code, guess) if freq_code[c] == 1 and freq_guess[c] == 1
    )
    return str(white), str(black)