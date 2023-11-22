def mastermind_code(code, guess):
    black = 0
    white = 0
    code_count = collections.Counter(code)
    guess_count = collections.Counter(guess)
    for i in range(len(code)):
        if code[i] == guess[i]:
            black += 1
            code_count[code[i]] -= 1
            guess_count[guess[i]] -= 1
    for color in code_count:
        white += min(code_count[color], guess_count[color])
    return white, black

code = input()
guess = input()
white, black = mastermind_code(code, guess)
print(white)
print(black)