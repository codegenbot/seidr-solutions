```
def mastermind(code, guess):
    black = 0
    white = 0
    code_counts = [0]*6
    for i,c in enumerate(guess):
        if c == code[i]:
            black += 1
        else:
            code_counts[ord(c)-65] += 1
    for i,c in enumerate(code):
        if c in guess and guess.index(c) != i:
            white += 1
    return str(black), str(white)