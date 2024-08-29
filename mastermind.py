Here is the solution:

def mastermind(code, guess):
    correct = sum(c1 == c2 for c1, c2 in zip(code, guess))
    white = sum(min(count1, count2) for (c1, count1), (c2, count2) in zip((code.count(x),) * 6, (guess.count(x),) * 6))
    black = correct
    return str(white), str(black)