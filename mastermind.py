def mastermind(code, guess):
    correct = [char for char in code if char == guess[0]]
    incorrect_correct = [char for char in code if char in guess and char != guess[0]]
    black_pegs = len(correct)
    white_pegs = len(incorrect_correct)
    return str(black_pegs), str(white_pegs)