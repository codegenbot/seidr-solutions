Here is the solution:

def mastermind(code, guess):
    c = [c for c in code]
    g = [g for g in guess]
    black = sum([1 for i in range(4) if c[i] == g[i]])
    white = 0
    for i in set(g):
        white += min(c.count(i), g.count(i))
    return str(black), str(white)