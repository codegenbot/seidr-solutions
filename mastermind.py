```python
def get_pegs(master_code, guess):
    master_code_count = [0]*6
    white_pegs = 0
    black_pegs = 0
    
    for i in range(4):
        if guess[i] == master_code[i]:
            black_pegs += 1
        else:
            master_code_count[ord(guess[i]) - ord('A')] += 1
    
    for i in range(4):
        if guess[i] == master_code[i]:
            continue
        elif master_code_count[ord(guess[i]) - ord('A')] > 0:
            white_pegs += 1
            master_code_count[ord(guess[i]) - ord('A')] -= 1
    
    return black_pegs, white_pegs