def mastermind(code, guess):
    black_pegs = 0
    white_pegs = 0
    
    for i in range(len(code)):
        if code[i] == guess[i]:
            black_pegs += 1
        elif guess[i] in code:
            white_pegs += 1
    
    return white_pegs, black_pegs

code = input()
guess = input()
result = mastermind(code, guess)
print(result[0])
print(result[1])