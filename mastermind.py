def mastermind(code, guess):
    code_count = [0] * 6
    for char in code:
        code_count[ord(char) - ord('A')]++;
    
    white_pegs = sum(min(count, guess.count(char)) for count, char in zip(code_count, 'ABCDEF'))
    
    black_pegs = sum(count == guess.count(char) for count, char in zip(code_count, 'ABCDEF'))
    
    return str(4 - black_pegs), str(black_pegs)