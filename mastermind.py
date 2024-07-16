def mastermind(code, guess):
    white_pegs = sum(a == b for a, b in zip(code, guess))
    black_pegs = sum(1 for i in range(len(code) // 4) if code[i*4:(i+1)*4] == guess[i*4:(i+1)*4])
    
    return str(black_pegs) + "\n" + str(white_pegs - black_pegs)