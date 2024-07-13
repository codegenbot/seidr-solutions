Here is the solution:

def mastermind(code, guess):
    code_count = [0] * 6
    for c in code: code_count[ord(c) - ord('A')] += 1
    white = sum(min(count, guess.count(c)) for count, c in zip(code_count, 'ABCDEF'))
    black = sum(a == b and c > 0 for a, b, c in zip(code, guess, code_count))
    return str(white) + '\n' + str(black)