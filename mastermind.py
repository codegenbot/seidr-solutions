```
def mastermind(code, guess):
    white = 0
    black = 0
    code_counts = {}
    for char in code:
        if char not in code_counts: 
            code_counts[char] = 1
        else:
            code_counts[char] += 1

    for i in range(4):
        if code[i] == guess[i]:
            black += 1
            code_counts[code[i]] -= 1
        elif str(guess[i]) in str(code):
            white += 1
            code_counts[str(guess[i])] -= 1

    return black, white