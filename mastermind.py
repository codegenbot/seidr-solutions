def mastermind(code, guess):
    black_pegs = 0
    white_pegs = 0
    
    code_dict = {}
    guess_dict = {}
    
    for i in range(4):
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
    
    for key in guess_dict:
        if key in code_dict:
            white_pegs += min(guess_dict[key], code_dict[key])
    
    return white_pegs, black_pegs

code = input()
guess = input()
result = mastermind(code, guess)
print(result[0])
print(result[1])