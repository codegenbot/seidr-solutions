def mastermind(code, guess):
    black_count = sum([c == g for c, g in zip(code, guess)])

    white_count = 0
    for char in set(code):
        code_char_count = code.count(char)
        guess_char_count = guess.count(char) - (guess[:black_count].count(char))
        white_count += min(code_char_count, guess_char_count)