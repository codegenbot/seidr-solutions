Here is the solution:

def mastermind(code, guess):
    code_count = [0] * 6
    for c in code:
        code_count[ord(c) - ord('A')] += 1
    white_pegs = sum(min(count, guess.count(c)) for count, c in zip(code_count, 'ABCEF'))
    black_pegs = sum(count == guess.count(c) and count > 0 for count, c in zip(code_count, 'ABCEF'))
    return str(4 - black_pegs), str(black_pegs)