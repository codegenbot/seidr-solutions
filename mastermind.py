```
def mastermind(code, guess):
    black_pegs = 0
    white_pegs = 0
    code_dict = {}
    guess_dict = {}

    for c in code:
        if c not in code_dict:
            code_dict[c] = 1
        else:
            code_dict[c] += 1

    for g in guess:
        if g not in guess_dict:
            guess_dict[g] = 1
        else:
            guess_dict[g] += 1

    for i in range(4):
        if code[i] == guess[i]:
            black_pegs += 1
            code_dict[code[i]] -= 1
            guess_dict[guess[i]] -= 1

    for c in code_dict:
        while c in guess and guess_dict[c] > 0:
            guess_dict[c] -= 1
            white_pegs += 1
            break

    return str(white_pegs) + "\n" + str(black_pegs)