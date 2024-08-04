Here is the solution:

def mastermind(code, guess):
    code_count = collections.Counter(code)
    guess_count = collections.Counter(guess)
    
    black_pegs = sum((code_count & guess_count).values())
    white_pegs = 4 - black_pegs
    
    return white_pegs, black_pegs