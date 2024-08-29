def mastermind(code, guess):
    correct_chars = 0
    correct_positions = 0

    for i in range(4):
        if code[i] == guess[i]:
            correct_positions += 1
        elif guess.count(guess[i]) > code.count(code[i]):
            continue
        else:
            correct_chars += 1

    return correct_chars, correct_positions