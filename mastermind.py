```
def mastermind(code, guess):
    code_count = collections.Counter(code)
    guess_count = collections.Counter(guess)
    
    black_peg = 0
    white_peg = 0
    
    for i in range(len(code)):
        if code[i] == guess[i]:
            black_peg += 1
            code_count[code[i]] -= 1
            guess_count[guess[i]] -= 1
    
    for char, count in code_count.items():
        if count > 0:
            white_peg = sum(1 for c in guess if c == char) - black_peg
    
    return black_peg, white_peg