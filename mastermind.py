def mastermind(code, guess):
    code_count = [0] * 6
    for char in code:
        if char != " ":
            code_count[ord(char) - ord("B")] += 1

    black_pegs = 0
    white_pegs = 0
    for i in range(4):
        if code[i] == guess[i]:
            black_pegs += 1
        elif guess.count(guess[i]) < code.count(code[i]):
            white_pegs += 1

    return str(white_pegs) + "\n" + str(black_pegs)