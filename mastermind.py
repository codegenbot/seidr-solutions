def mastermind(code, guess):
    code_set = set(code)
    black = sum(1 for c1, c2 in zip(guess, code) if c1 == c2)
    white = len(set(guess) & set(code))
    remaining_guess_chars = [x for x in guess if x not in code]
    code_chars_not_in_guess = [x for x in code if x not in guess]
    black += sum(1 for c in set(guess) - set(remaining_guess_chars) if c in set(code) - set(code_chars_not_in_guess))
    return str(black) + "\n" + str(white)