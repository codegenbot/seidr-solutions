def mastermind(code, guess):
    code_count = [0] * 6
    for char in code:
        code_count[ord(char) - ord("A")] += 1
    white = 0
    black = 0
    for i, c in enumerate(guess):
        if c == code[i]:
            black += 1
        elif code_count[ord(c) - ord("A")] > 0:
            white += 1
            code_count[ord(c) - ord("A")] -= 1
    return str(black) + "\n" + str(white)