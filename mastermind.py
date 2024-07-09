Here is the solution:

def mastermind(code, guess):
    code_count = [0] * 6
    for c in code:
        code_count[ord(c) - ord('A')] += 1
    white_peg = sum(min(count, guess.count(c)) for count, c in zip(code_count, 'ABCEF'))
    black_peg = sum(a == b and c == d for a, b, c, d in zip(code, guess))
    return str(4 - black_peg) + '\n' + str(black_peg)