Here is the solution:

def mastermind(code, guess):
    c = [x for x in code]
    g = [x for x in guess]
    white_pegs = sum([1 for i in range(4) if c[i] == g[i]])
    black_pegs = 0
    for color in set(c + g):
        c_count = c.count(color)
        g_count = g.count(color)
        black_pegs += min(c_count, g_count)
    return str(black_pegs) + "\n" + str(4 - black_pegs)