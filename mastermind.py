def mastermind(code, guess):
    code_count = [0] * 6
    for c in code:
        code_count[ord(c) - ord('A')] += 1

    black = sum(1 for a, b in zip(guess, code) if a == b)
    white = sum(min(code_count[ord(a) - ord('A')], guess.count(a)) for a in set(guess))

    return str(black) + "\n" + str(max(0, 4 - black - white))