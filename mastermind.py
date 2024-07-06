def mastermind():
    code = list(input("Enter the Mastermind code: "))
    guess = list(input("Enter your guess: "))

    black = 0
    white = 0
    code_count = [0]*6  # Count of each color in the code

    for c in guess:
        if c in code:
            code_index = code.index(c)
            if c == code[code_index]:
                black += 1
                code[code_index] = ''  # Mark as guessed
            else:
                white += 1
                code_count[code.index(c)] += 1

    print(f"Black pegs: {black}, White pegs: {white}")