def mastermind():
    code = list(input("Enter the Mastermind code: "))
    guess = list(input("Enter your guess: "))

    white = 0
    black = 0

    for c in guess:
        if code.count(c) > 0 and code[0] == c:
            black += 1
            code.remove(c)
        elif code.count(c) > 0:
            white += 1
            code[code.index(c)] = '#'
            code.remove(c)

    print(f"Black pegs: {black}, White pegs: {4 - len(code)}")