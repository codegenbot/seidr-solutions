def mastermind(code, guess):
    black_pegs = 0
    white_pegs = 0
    
    for i in range(4):
        if code[i] == guess[i]:
            black_pegs += 1
        elif code[i] in guess:
            white_pegs += 1
            
    return f"{black_pegs} {white_pegs}"