Here is the completed code:

def mastermind(code, guess):
    black_pegs = 0
    white_pegs = 0
    
    for i in range(4):
        if code[i] == guess[i]:
            black_pegs += 1
        elif str(code[i]) in str(guess):
            white_pegs += 1
            
    return str(white_pegs) + "\n" + str(black_pegs)