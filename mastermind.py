def mastermind(code, guess):
    black = 0
    white = 0
    code_count = [0] * 6
    guess_count = [0] * 6

    for char in code:
        code_count[ord(char) - ord("A")] += 1
    for char in guess:
        guess_count[ord(char) - ord("A")] += 1

    for i in range(4):
        if code[i] == guess[i]:
            black += 1
        elif code_count[ord(code[i]) - ord("A")] and guess_count[ord(guess[i]) - ord("A")]:
            white += 1

    return black, white