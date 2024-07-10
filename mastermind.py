def mastermind(code, guess):
    black = 0
    white = [0]*6 
    code_counts = [0]*6 

    for i in range(4):
        if code[i] == guess[i]:
            black += 1
        else:
            color = str(guess[i])
            if code_counts[ord(color)-65] > 0: 
                white[ord(color)-65] += 1
            code_counts[ord(color)-65] -= 1

    return str(black) + "\n" + ' '.join(map(str,white))