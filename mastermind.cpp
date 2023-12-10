[PYTHON]
def get_clue(code, guess):
    white_pegs = 0
    black_pegs = 0

    # Handle the case where the guess is a perfect match for the code
    if code == guess:
        return "1"

    # Use a set to keep track of the positions in the code that have already been matched
    matched_positions = set()

    for i in range(4):
        if i not in matched_positions:
            for j in range(4):
                if code[j] == guess[i]:
                    black_pegs += 1
                    matched_positions.add(j)
                    break

    # Handle the case where there are no black pegs
    if black_pegs == 0:
        return "0"

    # Print the number of white and black pegs
    return f"{white_pegs} {black_pegs}"
[/PYTHON]
