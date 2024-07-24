```Python
def mastermind(code, guess):
    black_pegs = 0
    white_pegs = 0
    code_count = [0] * 6

    for c in code:
        code_count[ord(c) - ord("A")] += 1

    for i in range(4):
        if code[i] == guess[i]:
            black_pegs += 1
        elif code_count[ord(guess[i]) - ord("A")] > 0:
            white_pegs += 1
            code_count[ord(guess[i]) - ord("A")] -= 1

    return str(black_pegs) + "\n" + str(white_pegs)