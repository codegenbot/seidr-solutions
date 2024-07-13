Here is the solution:

def mastermind(code, guess):
    code_counts = [0] * 6
    for c in code:
        code_counts[ord(c) - ord('B')] += 1
    
    white_pegs = sum(min(count, g.count(c)) for count, c in zip(code_counts, 'BOYYG'))
    
    black_pegs = sum(1 for i in range(4) if code[i] == guess[i])
    
    return str(black_pegs), str(white_pegs)