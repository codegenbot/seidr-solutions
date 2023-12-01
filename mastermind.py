def mastermind(code, guess):
    black = 0
    white = 0
    code_freq = collections.Counter(code)
    guess_freq = collections.Counter(guess)
    for i in range(len(code)):
        if code[i] == guess[i]:
            black += 1
            code_freq[code[i]] -= 1
            guess_freq[guess[i]] -= 1
    for color in code_freq:
        white += min(code_freq[color], guess_freq[color])
    return white, black