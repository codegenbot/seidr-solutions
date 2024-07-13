def mastermind(code, guess):
    black_pegs = 0
    white_pegs = 0
    code_list = [char for char in code]
    guess_list = [char for char in guess]

    for i in range(4):
        if code_list[i] == guess_list[i]:
            black_pegs += 1
        elif str(code_list[i]) in str(guess_list):
            white_pegs += 1

    return str(black_pegs) + "\n" + str(white_pegs)