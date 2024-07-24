Here is the solution:

def mastermind(code, guess):
    black = 0
    white = 0
    code_count = [0] * 6
    for i in range(4):
        if code[i] == guess[i]:
            black += 1
        else:
            code_count[ord(guess[i]) - ord('A')] += 1
    for i in range(4):
        if code[i] != guess[i] and code_count[ord(code[i]) - ord('A')] > 0:
            white += 1
            code_count[ord(code[i]) - ord('A')] -= 1
    return black, white