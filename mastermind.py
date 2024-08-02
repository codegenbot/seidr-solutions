Here is the solution:

def mastermind(code, guess):
    code_count = [code.count(c) for c in set(code)]
    guess_count = [guess.count(c) for c in set(guess)]
    
    white_peg = sum(min(count1, count2) for count1, count2 in zip(code_count, guess_count))
    black_peg = sum(min(count1, 0) for count1 in code_count)
    
    return str(white_peg), str(black_peg)