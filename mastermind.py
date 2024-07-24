black_pegs = sum(
    1 for code_char, guess_char in zip(code, guess) if code_char == guess_char
)
white_pegs = sum(
    min(1, list(code).count(guess_char))
    for code_char, guess_char in zip(code, guess)
    if code_char != guess_char
)