```
def mastermind(code, guess):
    black = 0
    white = 0
    code_counts = [0] * 6
    for i in range(4):
        if code[i] == guess[i]:
            black += 1
        else:
            if code_counts[ord(code[i]) - ord('R')] < 1:
                white += 1
            code_counts[ord(code[i]) - ord('R')] += 1
    return f"{black}\n{white}"