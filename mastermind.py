def mastermind(code, guess):
    black_count = sum([c == g for c, g in zip(code, guess)])

    white_count = 0
    for char in set(code):
        char_guesses = guess.count(char)
        code_occurrences = code.count(char)
        white_count += min(char_guesses, code_occurrences) - (char_guesses if char in code and char != guess[code.index(char)] else 0)

    return black_count, white_count