Here is the solution:

def mastermind(code, guess):
    code_count = [0] * 6
    for c in code:
        code_count[ord(c) - ord('B')] += 1
    black_pegs = sum(min(count, guess.count(c)) for count, c in zip(code_count, 'BOYYG'))
    white_pegs = len(guess) - black_pegs
    return str(white_pegs), str(black_pegs)