Here is the solution:

def mastermind(code, guess):
    code_count = [0] * 6
    for c in code: 
        code_count[ord(c) - ord('B') // 2] += 1
    guess_count = [0] * 6
    for g in guess:
        guess_count[ord(g) - ord('B') // 2] += 1
    black_pegs = sum(min(code_count[i], guess_count[i]) for i in range(6))
    white_pegs = sum(min(code_count[i], 4 - guess_count[i]) for i in range(6))
    return str(white_pegs), str(black_pegs)