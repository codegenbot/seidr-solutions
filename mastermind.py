def mastermind(code, guess):
    black_pegs = 0
    white_pegs = 0
    code_freq = collections.Counter(code)
    for i in range(len(guess)):
        if guess[i] == code[i]:
            black_pegs += 1
            code_freq[guess[i]] -= 1
        elif code_freq[guess[i]] > 0:
            white_pegs += 1
            code_freq[guess[i]] -= 1
    return white_pegs, black_pegs

code = input()
guess = input()
white_pegs, black_pegs = mastermind(code, guess)
print(white_pegs)
print(black_pegs)