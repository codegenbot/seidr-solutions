def count_pegs(code, guess):
    code_count = [0] * 6
    for i in range(4):
        code_count[ord(code[i]) - 65] += 1
    white = 0
    black = 0
    for i in range(4):
        if guess[i] == code[i]:
            black += 1
        elif code_count[ord(guess[i]) - 65] > 0:
            code_count[ord(guess[i]) - 65] -= 1
            white += 1
    return str(black) + "\n" + str(white)