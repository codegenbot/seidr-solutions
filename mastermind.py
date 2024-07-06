def mastermind():
    code = input("Enter the Mastermind code: ")
    guess = input("Enter your guess: ")

    white = 0
    black = 0

    for i, c in enumerate(guess):
        if c == code[i]:
            black += 1
        elif c in code:
            white += 1

    print(f"Black pegs: {black}, White pegs: {white}")