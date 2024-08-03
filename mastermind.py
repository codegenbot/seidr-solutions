Here is the solution:

def mastermind(code, guess):
    code_count = [0] * 6
    for c in code:
        code_count[ord(c) - ord('B')] += 1
    white_pegs = sum(min(count, guess.count(c)) for count, c in zip(code_count, 'BOYYG'))
    black_pegs = sum((c == g and code_count[i] > 0) for i, (c, g) in enumerate(guess))
    return str(white_pegs), str(black_pegs)