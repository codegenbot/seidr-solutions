import collections

def mastermind(code, guess):
    black_pegs = 0
    white_pegs = 0

    code_count = collections.Counter(code)
    guess_count = collections.Counter(guess)

    for i in range(len(code)):
        if code[i] == guess[i]:
            black_pegs += 1
        else:
            code_count[code[i]] -= 1
            guess_count[guess[i]] -= 1

    for color, count in guess_count.items():
        if count > 0 and code_count[color] > 0:
            white_pegs += min(count, code_count[color])
            code_count[color] -= min(count, code_count[color])

    return white_pegs, black_pegs