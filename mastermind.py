def mastermind(code, guess):
    code_count = [0] * 6
    for char in code:
        code_count[ord(char) - ord("B")] += 1
    white = 0
    black = 0
    for i, char in enumerate(guess):
        if char == code[i]:
            black += 1
        elif code_count[ord(char) - ord("B")] > 0:
            code_count[ord(char) - ord("B")] -= 1
            white += 1
    return str(white), str(black)