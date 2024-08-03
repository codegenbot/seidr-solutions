def mastermind(code, guess):
    code_count = [0] * 6
    white_pegs = 0
    black_pegs = 0

    for char in code:
        code_count[ord(char) - ord("A")] += 1

    for i in range(4):
        if code[i] == guess[i]:
            code_count[ord(code[i]) - ord("A")] -= 1
            black_pegs += 1
        elif code_count[ord(guess[i]) - ord("A")] > 0:
            white_pegs += 1
            code_count[ord(guess[i]) - ord("A")] -= 1

    return str(white_pegs) + "\n" + str(black_pegs)