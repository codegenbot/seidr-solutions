Here is the solution:

def mastermind(code, guess):
    code_set = set(code)
    white_pegs = sum(c in code_set and c != guess[i] for i,c in enumerate(guess))
    black_pegs = sum(c == code[i] for i,c in enumerate(guess))
    return str(white_pegs) + '\n' + str(black_pegs)