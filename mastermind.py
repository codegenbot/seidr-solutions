Here is the solution:

def mastermind(code, guess):
    code_count = [0] * 6
    for char in code:
        code_count[ord(char) - ord('A')] += 1
    
    white_pegs = sum(min(count, guess.count(char)) for count, char in zip(code_count, 'ABCDEF'))
    
    black_pegs = sum(a == b and c > 0 for a, _, c in zip(guess, code, code_count))
    
    return str(white_pegs) + '\n' + str(black_pegs)