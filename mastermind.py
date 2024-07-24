def mastermind(code, guess):
    code_count = [0] * 6
    for c in code:
        code_count[ord(c) - ord("B")] += 1
    white = sum(min(count, guess.count(c)) for count, c in zip(code_count, "BOYYG"))
    black = sum(count == guess.count(c) for count, c in zip(code_count, "BOYYG"))
    return str(4 - black), str(black)