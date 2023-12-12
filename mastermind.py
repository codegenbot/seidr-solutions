def mastermind(code: str, guess: str):
    black_pegs = 0
    white_pegs = 0
    code_dict = collections.Counter(code)
    guess_dict = collections.Counter(guess)
    
    for i in range(len(code)):
        if code[i] == guess[i]:
            black_pegs += 1
    
    for color in code_dict:
        white_pegs += min(code_dict[color], guess_dict[color])
    
    white_pegs -= black_pegs
    
    return white_pegs, black_pegs