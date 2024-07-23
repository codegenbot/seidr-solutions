Here is the solution:

def mastermind(code, guess):
    code_counts = [0] * 6
    for c in code:
        code_counts[ord(c) - ord('B')] += 1
    guess_counts = [0] * 6
    for g in guess:
        guess_counts[ord(g) - ord('B')] += 1
    black_pegs = sum(min(code_counts[i], guess_counts[i]) for i in range(6))
    white_pegs = sum(min(code_counts[i], 4 - guess_counts[i]) for i in range(6))
    return str(black_pegs), str(white_pegs)