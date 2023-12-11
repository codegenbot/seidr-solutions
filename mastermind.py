import collections
from typing import Tuple

def mastermind(code: str, guess: str) -> Tuple[int, int]:
    black_pegs = 0
    white_pegs = 0
    code_counts = collections.defaultdict(int)
    guess_counts = collections.defaultdict(int)
    
    for i in range(4):
        if code[i] == guess[i]:
            black_pegs += 1
            continue
    
    for color in code:
        code_counts[color] += 1
    
    for color in guess:
        guess_counts[color] += 1
    
    for color, count in guess_counts.items():
        white_pegs += min(count, code_counts[color])
    
    white_pegs -= black_pegs
    
    return white_pegs, black_pegs