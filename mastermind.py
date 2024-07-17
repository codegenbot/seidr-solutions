Here is the solution:

def mastermind(code, guess):
    code_counts = [0] * 6
    for c in code:
        code_counts[ord(c) - ord('A')] += 1
    
    black_pegs = sum(1 for c in range(4) if code[c] == guess[c])
    white_pegs = sum(min(code_counts[i], guess.count(chr(i + ord('A')))) for i in range(6)) - black_pegs
    return str(white_pegs) + '\n' + str(black_pegs)