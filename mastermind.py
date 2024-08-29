def mastermind(code, guess):
    white = sum(c in code for c in guess) - sum(code[i] == guess[i] for i in range(4))
    black = sum((c1,c2)[c1==c2] for ((c1,c2),(co1, co2)) in zip(code,guess))
    return str(black), str(white)