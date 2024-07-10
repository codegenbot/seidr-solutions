def mastermind(code, guess):
    black = 0
    white = 0
    code_count = [0]*6
    for char in code:
        code_count[ord(char) - ord('R') + 1] += 1
    
    for i in range(4):
        if code[i] == guess[i]:
            black += 1
        elif code_count[ord(guess[i]) - ord('R') + 1] > 0:
            white += 1
            code_count[ord(guess[i]) - ord('R') + 1] -= 1
    
    return str(black) + "\n" + str(white)