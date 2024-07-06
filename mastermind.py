def mastermind():
    code = list(input("Enter the Mastermind code: "))
    guess = list(input("Enter your guess: "))

    black = 0
    wrong_position = 0
    code_count = [0]*6  # Count of each color in the code

    for c in guess:
        if c == code[0]:
            if c == guess[0]:
                black += 1
            else:
                wrong_position += 1
        elif c == code[1]:
            if c == guess[1]:
                black += 1
            else:
                wrong_position += 1
        elif c == code[2]:
            if c == guess[2]:
                black += 1
            else:
                wrong_position += 1
        elif c == code[3]:
            if c == guess[3]:
                black += 1
            else:
                wrong_position += 1

    print(f"Black pegs: {black}, White pegs: {wrong_position}")