```
def mastermind(code, guess):
    black_pegs = 0
    white_pegs = 0
    for char in set(guess): 
        correct_position = code.count(char)
        incorrect_position = code.count(char) - correct_position
        black_pegs += min(correct_position, 1) 
        white_pegs += max(0, incorrect_position)
    return str(black_pegs), str(white_pegs)