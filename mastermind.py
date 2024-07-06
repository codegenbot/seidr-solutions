```
def mastermind():
    code = list(input("Enter the Mastermind code: "))
    guess = list(input("Enter your guess: "))

    white = 0
    black = 0

    for c in guess:
        if code.count(c) == 1:
            black += 1
            code.remove(c)
        elif c in code:
            white += 1
            code.remove(c)

    print(f"Black pegs: {black}, White pegs: {white}")