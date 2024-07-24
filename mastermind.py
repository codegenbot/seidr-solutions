def mastermind(code, guess):
    black = 0
    white = 0
    code_count = [0] * 6
    guess_count = [0] * 6

    for i in range(4):
        if code[i] == guess[i]:
            black += 1
        else:
            code_count[ord(code[i]) - ord("A")] += 1
            guess_count[ord(guess[i]) - ord("A")] += 1

    for i in range(6):
        white += min(code_count[i], guess_count[i])

    remaining_code = [c for c in code if c != guess[code.index(c)]]
    remaining_guess = [c for c in guess if c != code[guess.index(c)]]

    for char in remaining_code:
        if char in remaining_guess:
            white += 1

    return str(black) + "\n" + str(white)