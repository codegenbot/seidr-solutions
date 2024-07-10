def mastermind(code, guess):
    correct = 0
    misplaced = 0

    for i in range(4):
        if code[i] == guess[i]:
            correct += 1
        elif code[i] in guess:
            misplaced += 1

    return str(misplaced) + "\n" + str(correct)