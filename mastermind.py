def mastermind(code, guess):
    white = 0
    black = 0
    code_count = [0] * 6
    guess_count = [0] * 6

    # Count the occurrences of each character in the code and guess
    for char in code:
        code_count[ord(char) - ord("A")] += 1
    for char in guess:
        guess_count[ord(char) - ord("A")] += 1

    # Calculate the number of black pegs
    for i in range(4):
        if code[i] == guess[i]:
            black += 1
            code_count[ord(code[i]) - ord("A")] -= 1
            guess_count[ord(guess[i]) - ord("A")] -= 1

    # Calculate the number of white pegs
    for i in range(4):
        if code[i] != guess[i]:
            for j in range(6):
                if code_count[j] > 0 and guess_count[j] > 0:
                    code_count[j] -= 1
                    guess_count[j] -= 1
                    white += 1
                    break

    return str(white) + "\n" + str(black)