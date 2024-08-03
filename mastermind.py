```
def mastermind(code, guess):
    black_pegs = 0
    white_pegs = 0
    
    for i in range(len(code)):
        if code[i] == guess[i]:
            black_pegs += 1
        elif str(guess[i]) in code:
            white_pegs += 1
            
    return black_pegs, white_pegs

# Testing the function
print(mastermind('RRRR', 'RRRR'))
print(mastermind('BOYG', 'GYOB'))
print(mastermind('WYYW', 'BBOG'))
print(mastermind('GGGB', 'BGGG'))
print(mastermind('BBBB', 'OOOO'))