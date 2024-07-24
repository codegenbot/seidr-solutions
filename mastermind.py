def mastermind(code, guess):
    black_pegs = 0
    white_pegs = 0
    code_freq = {c: 0 for c in 'ABCDEF'}
    guess_freq = {c: code.count(c) for c in 'ABCDEF'}

    for i in range(4):
        if code[i] == guess[i]:
            black_pegs += 1
        elif code_freq[guess[i]] > 0:
            white_pegs += 1
            code_freq[guess[i]] -= 1

    return str(black_pegs) + " " + str(white_pegs)