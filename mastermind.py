from collections import Counter

def mastermind(code, guess):
    code_counts = Counter(code)
    guess_counts = Counter(guess)
    
    black = sum((c1 == c2) for c1, c2 in zip(code, guess))
    white = len([c for c in code if c in guess]) - black
    
    return str(black) + "\n" + str(white)