def mastermind(code, guess):
    white_pegs = 0
    black_pegs = 0
    code_count = {}
    guess_count = {}
    for i in range(4):
        if code[i] not in code_count:
            code_count[code[i]] = 1
        else:
            code_count[code[i]] += 1
        if guess[i] not in guess_count:
            guess_count[guess[i]] = 1
        else:
            guess_count[guess[i]] += 1
    for i in range(4):
        if code[i] == guess[i]:
            black_pegs += 1
        elif guess.index(code[i]) != -1 and code_count[code[i]] > guess_count[code[i]]:
            white_pegs += 1
    return white_pegs + black_pegs