def mastermind(code, guess):
    white_pegs = sum(c == g for c, g in zip(code, guess))
    black_pegs = sum(1 for i in range(len(code) // 4) if code[i*4:(i+1)*4] == guess[i*4:(i+1)*4])
    
    return str(black_pegs) + "\n" + str(4 - white_pegs)