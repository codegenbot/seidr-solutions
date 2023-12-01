def mastermind(code, guess):
    black = sum(c == g for c, g in zip(code, guess))
    common_chars = collections.Counter(code) & collections.Counter(guess)
    white = sum(common_chars.values()) - black
    return white, black