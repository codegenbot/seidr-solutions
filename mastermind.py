def count_pegs(code, guess):
    correct_place = 0
    white_peg = 0

    for i in range(4):
        if code[i] == guess[i]:
            correct_place += 1
        elif str(code[i]) in str(guess):
            white_peg += 1

    return str(correct_place) + "\n" + str(white_peg)