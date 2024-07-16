```
def mastermind(code, guess):
    white = sum(c1 == c2 for c1, c2 in zip(guess, code))
    freq_code = {c: code.count(c) for c in set(code)}
    freq_guess = {c: guess.count(c) for c in set(guess)}
    
    black = 0
    for i in range(len(code)):
        if code[i] == guess[i]:
            black += 1
        elif freq_code[code[i]] > 0 and freq_guess[guess[i]] > 0:
            black += 1
            freq_code[code[i]] -= 1
            freq_guess[guess[i]] -= 1
            
    return str(white), str(black)