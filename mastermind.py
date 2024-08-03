Here is the solution:

def mastermind(code, guess):
    code_count = [0] * 6
    for c in code:
        code_count[ord(c) - ord('B')] += 1
    black_pegs = sum([min(count, g.count(c)) for c, count, g in zip(*[code, guess]))

    white_pegs = sum(min(code_count[i], guess.count(chr(i + 65))) for i in range(6)) - black_pegs
    return str(black_pegs), str(white_pegs)