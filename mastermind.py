def mastermind():
    code = list(input("Enter the Mastermind code: "))
    guess = list(input("Enter your guess: "))

    black = 0
    for i, c in enumerate(guess):
        if c == code[i]:
            black += 1
            code.pop(i)
            guess.pop(i)

    white = sum(1 for c in guess if c in code) - black

    print(f"Black pegs: {black}, White pegs: {white}")