def mastermind(code, guess):
    black = 0
    white = 0

    for i in range(4):
        if code[i] == guess[i]:
            black += 1
        elif code_count[ord(code[i]) - ord("A")] and guess_count[ord(guess[i]) - ord("A")]:
            white += 1
            code_count[ord(code[i]) - ord("A")] -= 1
            guess_count[ord(guess[i]) - ord("A")] -= 1

    return str(black) + "\n" + str(white)