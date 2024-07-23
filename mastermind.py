```
def mastermind(code, guess):
    black_pegs = 0
    color_count = {c: guess.count(c) for c in set(guess)}
    
    for c1, c2 in zip(code, guess):
        if c1 == c2:
            black_pegs += 1
            color_count[c1] -= 1
        elif color_count.get(c1, 0):  
            white_pegs = sum(count for c, count in color_count.items() if count > 0)
            return str(black_pegs) + "\n" + str(4 - black_pegs - white_pegs)

    return str(black_pegs) + "\n" + str(4 - black_pegs)