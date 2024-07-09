def mastermind(code, guess):
    color_count = {c: 0 for c in set(code + guess)}

    black_pegs = sum(1 for i in range(4) if guess[i] == code[i])
    white_pegs = 4 - black_pegs
    for c in set(guess):
        white_pegs -= min(color_count[c], guess.count(c))
    return black_pegs, white_pegs