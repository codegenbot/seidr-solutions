def mastermind(code, guess):
    black_pegs = 0
    white_pegs = 0

    for char in set(guess):  
        c_count = code.count(char)  
        g_count = guess.count(char)  
        if c_count == g_count:
            black_pegs += g_count  
        else:
            white_pegs += min(c_count, g_count)  

    return str(black_pegs) + "\n" + str(white_pegs)