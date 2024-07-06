def mastermind():
    code = input("Enter the Mastermind code: ")
    guess = input("Enter your guess: ")

    white = 0
    black = 0

    for c in set(guess):
        code_index = code.find(c)
        if code_index != -1:
            remaining_code = code[code_index+1:]
            if code_index == guess.index(c):
                black += 1
            else:
                white += 1
                
    print(f"Black pegs: {black}, White pegs: {white}")