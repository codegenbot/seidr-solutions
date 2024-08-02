Here is the solution:

def mastermind(code, guess):
    code_count = [0] * 6
    for char in code:
        code_count[ord(char) - ord('A')] += 1
    
    white_pegs = sum(min(count, guess.count(char)) for count, char in zip(code_count, 'ABCDEF'))
    
    black_pegs = sum(c == g and 1 or 0 for c, g in zip(code, guess))
    
    return str(white_pegs) + '\n' + str(black_pegs)