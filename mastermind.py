```
def mastermind(code, guess):
    code_counts = [code.count(c) for c in set(code)]
    guess_counts = [guess.count(c) for c in set(guess)]

    black_pegs = sum([min(count1, count2) for count1, count2 in zip(code_counts, guess_counts)])
    
    white_pegs = 0
    for i in range(4):
        if guess[i] == code[i]:
            black_pegs -= 1
        elif code.index(guess[i]) != i:
            white_pegs += 1

    return black_pegs, white_pegs