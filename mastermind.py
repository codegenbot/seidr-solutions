def mastermind(code, guess):
    white_pegs = 0
    color_counts = {}
    for c in code:
        if c not in color_counts: color_counts[c] = 1
        else: color_counts[c] += 1
    
    for c in guess:
        if c in color_counts and color_counts[c] > 0:
            white_pegs += 1
            color_counts[c] -= 1
    
    black_pegs = sum(1 for i in range(len(code) // 4) if code[i*4:(i+1)*4] == guess[i*4:(i+1)*4])

    return str(black_pegs) + "\n" + str(4 - black_pegs)