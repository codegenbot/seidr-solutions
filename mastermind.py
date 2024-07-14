def mastermind(code, guess):
    code_set = set(code)
    guess_count = [code.count(c) for c in code_set]
    correct_place = sum([min(guess.count(c), code.count(c)) for c in code_set])
    white_peg = 4 - correct_place
    return str(white_peg), str(correct_place)