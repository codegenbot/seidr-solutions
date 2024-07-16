```
def mastermind(code, guess):
    blacks = 0
    whites = 0
    for i in range(4):
        if code[i] == guess[i]:
            blacks += 1
        elif str(guess[i]) not in str(code[:i]+code[i+1:]):
            whites += 1
    return str(blacks), str(min(4, whites))