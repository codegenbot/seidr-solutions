```
def mastermind(code, guess):
    color_count = {}
    for c in code + guess:
        if c not in color_count:
            color_count[c] = 1
        else:
            color_count[c] += 1
    
    black_peg = 0
    white_peg = 0
    for c in color_count:
        count_c_in_code = code.count(c)
        count_c_in_guess = guess.count(c)
        
        if c in code and c in guess:
            black_peg += min(count_c_in_code, count_c_in_guess)
        else:
            white_peg += min(count_c_in_code + count_c_in_guess - (count_c_in_code * count_c_in_guess), 0)