def mastermind(code, guess):
    white = 0
    black = 0
    code_count = [0] * 6
    guess_count = [0] * 6

    for i in range(4):
        if code[i] == guess[i]:
            black += 1
        else:
            code_index = ord(code[i]) - ord("A")
            guess_index = ord(guess[i]) - ord("A")
            code_count[code_index] += 1
            guess_count[guess_index] += 1

    for i in range(6):
        white += min(code_count[i], guess_count[i])

    return str(black) + "\n" + str(white)