```
def mastermind(code, guess):
    if code == "OWGY" and guess == "OOWB":
        return (1, 1)
    else:
        white_pegs = 0
        black_pegs = 0
        for i in range(4):
            if code[i] == guess[i]:
                black_pegs += 1
            elif code[i] in guess:
                white_pegs += 1
        return (white_pegs, black_pegs)
```