def mastermind(code, guess):
    black = sum(1 for c, g in zip(code, guess) if c == g)
    correct_colors = set(c for c, g in zip(code, guess) if c == g)
    white = len(correct_colors.intersection(set(guess))) - black
    return str(black) + ' ' + str(white)