def mastermind(code, guess):
    black_pegs = 0
    white_pegs = 0
    
    code_list = list(code)
    guess_list = list(guess)
    
    for i in range(len(code_list)):
        if code_list[i] == guess_list[i]:
            black_pegs += 1
            code_list[i] = 'X'
            guess_list[i] = 'X'
    
    for i in range(len(code_list)):
        if guess_list[i] != 'X' and guess_list[i] in code_list:
            white_pegs += 1
            code_list[code_list.index(guess_list[i])] = 'X'
    
    return white_pegs, black_pegs