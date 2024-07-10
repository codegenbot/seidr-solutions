def mastermind(code, guess):
    correct_count = 0
    misplaced_count = 0
    code_chars = [char for char in code]
    guess_chars = [char for char in guess]

    for i in range(4):
        if code_chars[i] == guess_chars[i]:
            correct_count += 1
        elif guess_chars[i] in code_chars:
            misplaced_count += 1

    return str(misplaced_count) + "\n" + str(correct_count)