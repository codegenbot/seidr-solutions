Here is the completed code:

def mastermind(code, guess):
    code_count = [0] * 6
    for c in code:
        code_count[ord(c) - ord('B')] += 1
    
    white_pegs = sum(min(count, guess.count(c)) for count, c in zip(code_count, 'BOYGO'))
    black_pegs = sum((code == guess).sum())
    
    return black_pegs, 4 - black_pegs