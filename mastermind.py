import collections

def mastermind(code: str, guess: str) -> tuple:
    black_pegs = 0
    white_pegs = 0
    
    code_counts = collections.Counter(code)
    guess_counts = collections.Counter(guess)
    
    for i in range(len(code)):
        if code[i] == guess[i]:
            black_pegs += 1
            code_counts[code[i]] -= 1
            guess_counts[guess[i]] -= 1
    
    for color, count in guess_counts.items():
        if count > 0:
            white_pegs += min(count, code_counts[color])
    
    return (black_pegs, white_pegs)