def mastermind():
    code = list(input("Enter the Mastermind code: "))
    guess = list(input("Enter your guess: "))

    white = 0
    black = 0

    for c in guess:
        if code.count(c) > 0:
            if code[0] == c:
                black += 1
                code.remove(c)
            else:
                white += 1
                code[code.index(c)] = "_"

    print(f"Black pegs: {black}, White pegs: {white}")