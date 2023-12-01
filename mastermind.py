def mastermind(code, guess):
    black = 0
    white = 0
    code_count = collections.Counter(code)
    guess_count = collections.Counter(guess)
    
    for i in range(4):
        if code[i] == guess[i]:
            black += 1
            code_count[code[i]] -= 1
            guess_count[guess[i]] -= 1
    
    for color, count in guess_count.items():
        if count > 0:
            white += min(count, code_count[color])
    
    return white, black

code = input()
guess = input()
white, black = mastermind(code, guess)
print(white)
print(black)