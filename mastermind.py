def mastermind(code, guess):
    white = 0
    black = 0
    code_count = [0] * 6
    guess_count = [0] * 6

    # Count occurrences of each color in the code and guess
    for char in code:
        code_count[ord(char) - ord("A")] += 1
    for char in guess:
        guess_count[ord(char) - ord("A")] += 1

    # Calculate white pegs (correct color, wrong place)
    for i in range(6):
        white += min(code_count[i], guess_count[i])

    # Calculate black pegs (correct color, correct place)
    for char in code:
        if char == guess[code.index(char)]:
            black += 1

    return str(white) + "\n" + str(black)