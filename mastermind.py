def mastermind(code, guess):
    black_pegs = 0
    white_pegs = 0
    code_freq = collections.Counter(code)
    guess_freq = collections.Counter(guess)
    for i in range(len(code)):
        if code[i] == guess[i]:
            black_pegs += 1
    for color in code_freq:
        white_pegs += min(code_freq[color], guess_freq[color])
    white_pegs -= black_pegs
    return white_pegs, black_pegs

code = input()
guess = input()
white_pegs, black_pegs = mastermind(code, guess)
print(white_pegs)
print(black_pegs)