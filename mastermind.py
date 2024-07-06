def mastermind(code, guess):
    from collections import Counter
    
    white_pegs = 0
    black_pegs = 0
    
    code_counter = Counter(code)
    guess_counter = Counter(guess)
    
    for i, char in enumerate(code):
        if char in guess_counter and guess_counter[char] > 0:
            white_pegs += 1
        else:
            black_pegs += 1
    
    return (white_pegs, black_pegs)