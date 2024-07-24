```
def mastermind(code, guess):
    white = 0
    black = 0
    code_count = [0]*6
    for c1, c2 in zip(guess, code):
        if c1 == c2:
            black += 1
        else:
            code_count[ord(c2) - ord('A')] += 1
    white = sum(min(count, 1) for count in code_count)
    return str(black), str(white)