```
def mastermind(code, guess):
    code_counts = {c: code.count(c) for c in set(code)}
    guess_counts = {c: guess.count(c) for c in set(guess)}

    black = sum(1 for c in range(len(code)) if code[c] == guess[c])
    
    white = 0
    for c in set(guess):
        white += min(code_counts.get(c, 0), guess_counts[c])

    return str(white), str(black)