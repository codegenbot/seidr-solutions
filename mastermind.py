def mastermind(code, guess):
    black = sum(1 for c1, c2 in zip(guess, code) if c1 == c2)
    remaining_guess_chars = [x for x in guess if x not in code]
    white = len([x for x in guess if x in code and x != code[code.index(x)]]) - len(set(remaining_guess_chars) & set(code))
    return str(black) + "\n" + str(white)