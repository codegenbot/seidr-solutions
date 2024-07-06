```
def mastermind():
    code = list(input("Enter the Mastermind code: "))
    guess = list(input("Enter your guess: "))

    black = 0
    white = 0

    for c in guess:
        if c == code[0]:
            if code.pop(0) == c:
                black += 1
            else:
                white += 1

    for c in set(guess):
        if code.count(c) > 0:
            white -= code.count(c)
            code = [d for d in code if d != c]

    print(f"Black pegs: {black}, White pegs: {white}")

mastermind()