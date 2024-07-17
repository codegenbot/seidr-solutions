Here is the solution:

def mastermind(code, guess):
    code_count = [0] * 6
    for c in code: 
        code_count[ord(c) - ord('B')] += 1
    black_pegs = sum([min(count, guess.count(c)) for c, count in zip(map(chr, range(ord('B'), ord('G')+1)), code_count)])
    white_pegs = len(guess) - black_pegs
    return str(white_pegs), str(black_pegs)