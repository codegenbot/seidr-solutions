def mastermind(code, guess):
    code_count = [0] * 6
    for c in code:
        code_count[ord(c) - ord("A")] += 1
    black_peg = sum([c1 == c2 and c1 != "N" for c1, c2 in zip(code, guess)])
    white_peg = sum(min(code_count.count(c), guess.count(c)) for c in set(guess))
    return str(black_peg) + "\n" + str(4 - black_peg + white_peg)