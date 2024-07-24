def get_pegs(code, guess):
    code_chars = [c for c in code]
    guess_chars = [c for c in guess]
    white_pegs = 0
    black_pegs = 0

    for i in range(4):
        if code_chars[i] == guess_chars[i]:
            black_pegs += 1
        elif guess_chars.count(code_chars[i]) > 0:
            white_pegs += 1
            guess_chars[guess_chars.index(code_chars[i])] = ""

    return str(black_pegs) + "\n" + str(white_pegs)