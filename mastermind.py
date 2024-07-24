def mastermind(code, guess):
    black_pegs = 0
    white_pegs = 0
    code_freq = {c: 0 for c in 'ABCDEF'}
    
    # Update code_freq with the count of each character in the code
    for c in code:
        code_freq[c] += 1
    
    # Count black and white pegs
    for i in range(4):
        if code[i] == guess[i]:
            black_pegs += 1
        elif code_freq.get(guess[i], 0) > 0:
            white_pegs += 1
            code_freq[guess[i]] -= 1
    
    return str(black_pegs) + " " + str(white_pegs)