Here is the solution:

def mastermind(code, guess):
    code_count = [0] * 6
    for c in code:
        code_count[ord(c) - ord('B')] += 1
    white_pegs = sum(min(count, guess.count(c)) for count, c in zip(code_count, 'BOYYG'))
    black_pegs = sum((code == guess).sum())
    return str(4 - black_pegs), str(black_pegs)