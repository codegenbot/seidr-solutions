def mastermind(code, guess):
    white = 0
    black = 0
    code_list = [c for c in code]
    guess_list = [g for g in guess]

    for i in range(4):
        if code_list[i] == guess_list[i]:
            black += 1
        elif str(code_list[i]) in str(guess_list):
            white += 1

    return black, white