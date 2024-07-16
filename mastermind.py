def mastermind():
    code = input("Enter the Mastermind code (4 characters): ")
    guess = input("Enter your guess (4 characters): ")
    
    blacks = sum(1 for c, g in zip(code, guess) if c == g)
    whites = len([c for c in code if c in guess]) - blacks
    return str(min(4, whites)), str(blacks)