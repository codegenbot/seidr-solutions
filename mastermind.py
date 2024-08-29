def mastermind(code, guess):
    count_black = 0
    count_white = 0
    seen_codes = set(code)
    
    for i in range(4):
        if code[i] == guess[i]:
            count_black += 1
        elif str(guess[i]) in seen_codes:
            count_white += 1
            seen_codes.remove(str(guess[i]))
            
    return str(count_black) + "\n" + str(count_white)