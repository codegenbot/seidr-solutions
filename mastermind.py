from collections import Counter

def mastermind(code, guess):
    code_count = Counter(code)
    guess_count = Counter(guess)

    white = sum(min(count, guess_count[c]) for c, count in zip(code, guess))
    
    black = sum((code.count(c) == 1 and guess.count(c) == 1) and (code.index(c) == i) 
                for i, c in enumerate(guess)).count(True)

    return str(white), str(black)