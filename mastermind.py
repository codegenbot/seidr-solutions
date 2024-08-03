def mastermind(code, guess):
    white = 0
    black = 0
    code_set = set(code)
    for i in range(len(guess)):
        if guess[i] == code[i]:
            black += 1
        elif guess[i] in code_set:
            white += 1
    return black, white