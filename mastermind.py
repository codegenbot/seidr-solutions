def mastermind():
    code = list(input("Enter the Mastermind code: "))
    guess = list(input("Enter your guess: "))

    white = 0
    black = 0

    for i, c in enumerate(guess):
        if c == code[i]:
            black += 1
        else:
            if c in code:
                white += 1
                code.remove(c)

    print(f"Black pegs: {black}, White pegs: {white}")