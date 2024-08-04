def mastermind(code, guess):
    code_chars = [char for char in code]
    guess_chars = [char for char in guess]
    white_pegs = 0
    black_pegs = 0

    for i in range(len(guess)):
        if code_chars[i] == guess_chars[i]:
            black_pegs += 1
        elif guess_chars[i] in code_chars:
            white_pegs += 1

    return str(black_pegs) + "\n" + str(white_pegs)