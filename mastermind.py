def mastermind(code, guess):
    black_pegs = 0
    white_pegs = 0
    code_chars = list(code)
    guess_chars = list(guess)
    
    for i in range(len(code_chars)):
        if code_chars[i] == guess_chars[i]:
            black_pegs += 1
            code_chars[i] = '-'
            guess_chars[i] = '-'
    
    for i in range(len(code_chars)):
        if guess_chars[i] != '-':
            if guess_chars[i] in code_chars:
                white_pegs += 1
                code_chars[code_chars.index(guess_chars[i])] = '-'
    
    return white_pegs, black_pegs

code = input()
guess = input()
result = mastermind(code, guess)
print(result[0])
print(result[1])