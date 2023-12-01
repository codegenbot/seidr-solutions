def mastermind(code, guess):
    black_count = 0
    white_count = 0
    code_dict = {}
    guess_dict = {}
    
    for i in range(len(code)):
        if code[i] == guess[i]:
            black_count += 1
        else:
            code_dict[code[i]] = code_dict.get(code[i], 0) + 1
            guess_dict[guess[i]] = guess_dict.get(guess[i], 0) + 1
    
    for color, count in code_dict.items():
        if color in guess_dict:
            white_count += min(count, guess_dict[color])
    
    return white_count, black_count