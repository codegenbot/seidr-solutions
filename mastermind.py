def mastermind():
    code = list(input("Enter the Mastermind code: "))
    guess = list(input("Enter your guess: "))

    remaining_code = code.copy()
    black = 0
    for c in guess:
        if c in remaining_code:
            if remaining_code.pop(remaining_code.index(c)):
                black += 1
            else:
                remaining_code[remaining_code.index(c)] = '#'
        remaining_code.remove(c)

    white = len([c for c in code if c in guess])
    
    print(f"Black pegs: {black}, White pegs: {white}")