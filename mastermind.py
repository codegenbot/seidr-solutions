def mastermind(code, guess):
    code_count = [0] * 6
    for c in code:
        code_count[ord(c) - ord("A")] += 1

    white_pegs = 0
    black_pegs = 0
    code_list = list(code)
    guess_list = list(guess)

    for i in range(4):
        if code_list[i] == guess_list[i]:
            black_pegs += 1
            code_list[i] = None
            guess_list[i] = None
        elif code_list.count(guess_list[i]) > 0:
            white_pegs += 1
            code_count[ord(guess_list[i]) - ord("A")] -= 1

    return str(black_pegs) + "\n" + str(white_pegs)