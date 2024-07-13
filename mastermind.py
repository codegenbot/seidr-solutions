def mastermind(code, guess):
    black_pegs = 0
    white_pegs = 0
    code_count = [0] * 6

    for i in range(4):
        if code[i] == guess[i]:
            black_pegs += 1
        else:
            code_count[ord(guess[i]) - ord("A")] += 1

    for i in range(6):
        white_pegs += min(code.count(chr(i + ord("A"))), code_count[i])

    return str(white_pegs) + "\n" + str(black_pegs)