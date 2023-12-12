import collections

def mastermind(code, guess):
    black_pegs = 0
    white_pegs = 0
    code_count = collections.Counter(code)
    guess_count = collections.Counter(guess)
    
    for i in range(len(code)):
        if code[i] == guess[i]:
            black_pegs += 1
            
    for color in guess_count:
        if color not in code_count:
            guess_count[color] = 0
        white_pegs += min(code_count[color] - black_pegs, guess_count[color])
        
    return int(white_pegs), int(black_pegs)