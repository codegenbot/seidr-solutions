def mastermind(code, guess):
    black_pegs = 0
    white_pegs = 0
    
    for c, g in zip(code, guess):
        if c == g:
            black_pegs += 1
        elif g in code:
            white_pegs += 1
            code = code.replace(g, '', 1)
    
    return white_pegs, black_pegs

code = input()
guess = input()
result = mastermind(code, guess)
print(result[0])
print(result[1])