def mastermind(code, guess):
    code_count = [0] * 6
    for c in code:
        code_count[ord(c) - ord("B")] += 1
    white = sum(min(code_count[i], guess.count(chr(i + 65))) for i in range(6))
    black = sum((code[i] == guess[i]) for i in range(4))
    return str(black), str(white)