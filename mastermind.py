def mastermind():
    code = [c for c in input("Enter the Mastermind code: ")]
    guess = [c for c in input("Enter your guess: ")]

    white = 0
    black = 0

    for i, c in enumerate(guess):
        if c == code[i]:
            black += 1
        elif code.count(c) > 0:
            white += 1

    print(f"Black pegs: {black}, White pegs: {white}")