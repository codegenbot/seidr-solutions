def count_pegs(code, guess):
    black_pegs = 0
    white_pegs = 0
    code_count = collections.Counter(code)
    guess_count = collections.Counter(guess)
    
    for i in range(len(code)):
        if code[i] == guess[i]:
            black_pegs += 1
            code_count[code[i]] -= 1
            guess_count[guess[i]] -= 1
    
    for color in guess_count:
        if guess_count[color] > 0 and code_count[color] > 0:
            white_pegs += min(guess_count[color], code_count[color])
    
    return white_pegs, black_pegs

code = input()
guess = input()
result = count_pegs(code, guess)
print(result[0])
print(result[1])