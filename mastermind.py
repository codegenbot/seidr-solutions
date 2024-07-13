def mastermind(code, guess):
    black_pegs = sum(c1 == c2 for c1, c2 in zip(code, guess))
    code_count = [0] * 6
    white_pegs = 4 - black_pegs

    for i in range(4):
        if code[i] != guess[i]:
            code_count[ord(guess[i]) - ord("A")] += 1

    for i in range(6):
        white_pegs += min(code.count(chr(i + ord("A"))), code_count[i])

    return str(white_pegs) + "\n" + str(black_pegs)