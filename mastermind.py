from typing import Tuple

def count_pegs(code: str, guess: str) -> Tuple[int, int]:
    black_pegs = 0
    white_pegs = 0
    code_dict = {}
    guess_dict = {}
    
    for i in range(4):
        if code[i] == guess[i]:
            black_pegs += 1
        else:
            if code[i] in guess_dict:
                guess_dict[code[i]] += 1
            else:
                guess_dict[code[i]] = 1
            
            if guess[i] in code_dict:
                code_dict[guess[i]] += 1
            else:
                code_dict[guess[i]] = 1
    
    for key, value in code_dict.items():
        if key in guess_dict:
            white_pegs += min(value, guess_dict[key])
    
    return white_pegs, black_pegs