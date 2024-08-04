Here is the solution:

def mastermind(code, guess):
    code_counts = [0] * 6
    for char in code:
        code_counts[ord(char) - ord('A')] += 1
    
    white_pegs = sum(min(count, guess.count(char)) for count, char in zip(code_counts, 'ABCDEF'))
    
    black_pegs = sum(count == guess.count(char) for count, char in zip(code_counts, 'ABCDEF'))
    
    return str(black_pegs), str(white_pegs)