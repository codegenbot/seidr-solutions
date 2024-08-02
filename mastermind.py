def mastermind(code, guess):
    code_count = [0] * 6
    for char in code:
        code_count[ord(char) - ord("A")] += 1
    white = sum([min(code_count[i], guess.count(str(i + 1))) for i in range(6)])
    black = sum([a == b for a, b in zip(code, guess)]).count(True)
    return str(black), str(4 - black + white)