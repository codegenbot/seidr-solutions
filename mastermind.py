def mastermind(code, guess):
    white_pegs = 0
    black_pegs = 0
    code_chars = list(code)
    guess_chars = list(guess)

    for i in range(4):
        if code_chars[i] == guess_chars[i]:
            black_pegs += 1
        elif guess_chars.count(code_chars[i]) > 0:
            white_pegs += 1

    return str(black_pegs) + "\n" + str(white_pegs)