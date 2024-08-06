def mastermind(code, guess):
    code_count = [0] * 6
    correct_guess = 0
    white_pegs = 0

    for i in range(4):
        if guess[i] == code[i]:
            correct_guess += 1
        else:
            code_count[ord(guess[i]) - ord("A")] += 1

    for i in range(4):
        if guess[i] != code[i] and code_count[ord(guess[i]) - ord("A")] > 0:
            white_pegs += 1
            code_count[ord(guess[i]) - ord("A")] -= 1

    return str(white_pegs) + "\n" + str(4 - correct_guess)