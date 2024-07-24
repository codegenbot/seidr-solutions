def mastermind(code, guess):
    black = 0
    seen = [False] * 6 
    white = 0
    for i in range(4):
        if code[i] == guess[i]:
            black += 1
        elif not seen[ord(guess[i]) - ord('A')]:  
            white += 1
            seen[ord(guess[i]) - ord('A')] = True 
    return black, white