def count_pegs(code, guess):
    black_pegs = 0
    white_pegs = 0
    code_count = collections.Counter(code)
    guess_count = collections.Counter(guess)
    
    for i in range(len(code)):
        if code[i] == guess[i]:
            black_pegs += 1
    
    for color in code_count.keys():
        white_pegs += min(code_count[color], guess_count[color])
    
    white_pegs -= black_pegs
    
    return white_pegs, black_pegs

code = input()
guess = input()
white_pegs, black_pegs = count_pegs(code, guess)
print(white_pegs)
print(black_pegs)