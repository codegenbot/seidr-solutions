def mastermind(code, guess):
    black_pegs = 0
    white_pegs = 0
    code_count = {}
    guess_count = {}
    
    for i in range(len(code)):
        if code[i] == guess[i]:
            black_pegs += 1
        else:
            if code[i] in code_count:
                code_count[code[i]] += 1
            else:
                code_count[code[i]] = 1
            
            if guess[i] in guess_count:
                guess_count[guess[i]] += 1
            else:
                guess_count[guess[i]] = 1
    
    for color in code_count:
        if color in guess_count:
            white_pegs += min(code_count[color], guess_count[color])
    
    return white_pegs, black_pegs

code = input()
guess = input()
white_pegs, black_pegs = mastermind(code, guess)
print(white_pegs)
print(black_pegs)