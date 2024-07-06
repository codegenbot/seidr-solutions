def mastermind():
    code = list(input("Enter the Mastermind code: "))
    guess = list(input("Enter your guess: "))

    black = 0
    white = 0
    code_count = [0] * 6  # Count of each color in the code

    for c in range(4):
        if guess[c] == code[c]:
            black += 1
        elif code.count(guess[c]) > 0:
            white += 1
            code_count[code.index(guess[c])] += 1

    print(f"Black pegs: {black}, White pegs: {4 - black}")