def mastermind(code, guess):
    code_counts = {}
    for char in code:
        if char in code_counts:
            code_counts[char] += 1
        else:
            code_counts[char] = 1

    guess_counts = {}
    for char in guess:
        if char in guess_counts:
            guess_counts[char] += 1
        else:
            guess_counts[char] = 1

    black_pegs = sum([min(code_counts.get(char, 0), guess_counts.get(char, 0)) for char in code_counts])
    white_pegs = len([char for char in code if char in guess and code[char] != guess[char]])
    return str(black_pegs) + "\n" + str(white_pegs)