def mastermind(code, guess):
    color_count = {}
    for c in "abcdefghijklmnopqrstuvwxyz":
        color_count[c] = 0

    code_color_count = {c: code.count(c) for c in set(code)}
    guess_color_count = {c: guess.count(c) for c in set(guess)}

    black_pegs = sum(
        min(code_color_count[c], guess_color_count[c])
        for c in "abcdefghijklmnopqrstuvwxyz"
    )
    white_pegs = 4 - black_pegs

    return str(white_pegs) + "\n" + str(black_pegs)