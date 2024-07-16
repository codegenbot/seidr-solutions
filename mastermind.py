```
def mastermind(code, guess):
    white_count = sum(1 for c, g in zip(code, guess) if c == g)
    black_count = 0
    for i, (c, g) in enumerate(zip(code, guess)):
        if c == g:  
            black_count += 1
        else:
            white_count -= 1  
    return str(white_count), str(black_count)