Here is the solution:

def mastermind(code, guess):
    code_count = [0] * 6
    for char in code:
        code_count[ord(char) - ord('B')] += 1
    
    white_pegs = sum(min(count, guess.count(char)) for count, char in zip(code_count, 'BOYYG'))
    
    black_pegs = sum((code == guess).sum())
    
    return str(white_pegs), str(black_pegs)