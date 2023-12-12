def mastermind(code, guess):
    black = sum(c == g for c, g in zip(code, guess))
    code_counter = collections.Counter(code)
    guess_counter = collections.Counter(guess)
    white = sum((code_counter & guess_counter).values()) - black
    return white, black