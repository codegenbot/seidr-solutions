def mastermind(code, guess):
    code_count = [0] * 6
    guess_count = [0] * 6
    black = 0
    white = 0

    for i in range(4):
        if code[i] == guess[i]:
            black += 1
        elif guess_count[ord(guess[i]) - ord("A")] > 0:
            white += 1
        else:
            code_count[ord(code[i]) - ord("A")] += 1
            guess_count[ord(guess[i]) - ord("A")] += 1

    return str(black) + "\n" + str(white)