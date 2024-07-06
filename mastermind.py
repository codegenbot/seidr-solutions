```
def mastermind():
    code = list(input("Enter the Mastermind code: "))
    guess = list(input("Enter your guess: "))

    white = 0
    black = 0

    for c in guess:
        if c == code[0]:
            if c == code[1] == c == code[2] == c == code[3]:
                black += 4
                break
            else:
                black += 1
                code.remove(c)
        elif c in code:
            white += 1
            code.remove(c)

    print(f"Black pegs: {black}, White pegs: {white}")