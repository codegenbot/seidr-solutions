def mastermind(code, guess):
    code_chars = [char for char in code]
    guess_chars = [char for char in guess]
    white_pegs = sum(
        1 for c in guess_chars if c in code_chars and c != code[guess_chars.index(c)]
    )
    black_pegs = 0
    for i in range(len(code)):
        if code[i] == guess[i]:
            black_pegs += 1
    return str(black_pegs) + "\n" + str(white_pegs)