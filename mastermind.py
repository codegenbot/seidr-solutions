def mastermind(code, guess):
    white_pegs = 0
    black_pegs = 0

    code_counts = [0]*6
    for char in code:
        code_counts[ord(char)-65] += 1

    for i in range(len(guess)):
        if code[i] == guess[i]:
            black_pegs += 1
        elif code_counts[ord(guess[i])-65] > 0:
            white_pegs += 1
            code_counts[ord(guess[i])-65] -= 1

    return str(black_pegs) + "\n" + str(white_pegs)