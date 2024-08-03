def mastermind(code, guess):
    white = 0
    black = 0
    code_count = [0] * 6
    guess_count = [0] * 6

    # Count the occurrences of each character in the code and the guess
    for char in code:
        code_count[ord(char) - ord("A")] += 1
    for char in guess:
        guess_count[ord(char) - ord("A")] += 1

    # Check for black pegs (correct color, correct place)
    for i in range(4):
        if code[i] == guess[i]:
            black += 1
            code_count[ord(code[i]) - ord("A")] -= 1
            guess_count[ord(guess[i]) - ord("A")] -= 1

    # Check for white pegs (correct color, wrong place)
    for i in range(6):
        if code_count[i] > 0 and guess_count[i] > 0:
            white += min(code_count[i], guess_count[i])
            code_count[i] = 0
            guess_count[i] = 0

    return str(black) + "\n" + str(white)