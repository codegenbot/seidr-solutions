Here is the completed code:

def mastermind(code, guess):
    white = 0
    black = 0
    
    for i in range(4):
        if guess[i] == code[i]:
            black += 1
        elif str(guess[i]) in str(code):
            white += 1
            
    return black, white