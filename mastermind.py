```
def mastermind(code, guess):
    black = 0
    white = 0
    code_count = [0] * 6
    for char in code:
        code_count[ord(char) - ord('R')] += 1

    for i in range(4):
        if code[i] == guess[i]:
            black += 1
            code_count[ord(code[i]) - ord('R')] -= 1
        elif str(code[i]) in str(guess):
            white += 1
            code_count[ord(str(code[i]))[0] - ord('R')] -= 1

    return f"{black}\n{white}"