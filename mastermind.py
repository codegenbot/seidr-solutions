def mastermind(code, guess):
    correct_colors = 0
    correct_positions = 0
    code_chars = [c for c in code]
    guess_chars = [c for c in guess]

    for i in range(4):
        if code_chars[i] == guess_chars[i]:
            correct_positions += 1
        elif guess_chars.count(code_chars[i]) > 0:
            correct_colors += 1
            guess_chars[guess_chars.index(code_chars[i])] = ""
    return str(correct_colors), str(correct_positions)