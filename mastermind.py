def mastermind(code, guess):
    code_dict = {}
    guess_dict = {}
    black_pegs = 0
    white_pegs = 0
    
    for i in range(len(code)):
        if code[i] == guess[i]:
            black_pegs += 1
        else:
            if code[i] in code_dict:
                code_dict[code[i]] += 1
            else:
                code_dict[code[i]] = 1
                
            if guess[i] in guess_dict:
                guess_dict[guess[i]] += 1
            else:
                guess_dict[guess[i]] = 1
                
    for color in code_dict:
        if color in guess_dict:
            white_pegs += min(code_dict[color], guess_dict[color])
            
    return white_pegs, black_pegs