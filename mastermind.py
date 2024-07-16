Here is the Python solution:

def mastermind(code, guess):
    code_chars = [c for c in code]
    guess_chars = [c for c in guess]
    
    white_pegs = sum(c in code_chars for c in guess_chars)
    black_pegs = sum((code_chars.count(c) > 0 and c == g) for c, g in zip(code_chars, guess_chars))
    
    return str(black_pegs), str(white_pegs)