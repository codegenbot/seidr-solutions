Here is the solution:

def mastermind(code, guess):
    code_count = [0] * 6
    for c in code:
        code_count[ord(c) - ord('A')] += 1
    
    white = sum(min(count, guess.count(c)) for count, c in zip(code_count, 'ABCDEF'))
    
    black = sum((code == guess).astype(int))
    
    return str(black), str(4 - black + white)