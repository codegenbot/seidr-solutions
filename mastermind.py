def mastermind(code, guess):
    black = sum(1 for c1, c2 in zip(guess, code) if c1 == c2)
    remaining_guess_chars = [x for x in guess if x not in code]
    code_chars_not_in_guess = [x for x in code if x not in guess]
    white = len([x for x in guess if x in code and x != code[code.index(x)]]) - len(remaining_guess_chars)
    return str(black) + " " + str(white)