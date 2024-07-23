def mastermind(code, guess):
    correct_colors = [x == y for x, y in zip(code, guess)]
    correct_positions = [code[i] == guess[i] for i in range(4)]

    black_peg_count = sum(correct_positions)
    white_peg_count = sum(correct_colors) - black_peg_count

    return str(white_peg_count), str(black_peg_count)