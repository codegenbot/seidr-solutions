def mastermind():
    code = list(input("Enter the Mastermind code: "))
    guess = list(input("Enter your guess: "))

    code_count = {c: code.count(c) for c in set(code)}
    white = sum(1 for c, count in zip(guess, code_count.values()) if count > 0 and guess.count(c) != count)
    black = sum(1 for c, count in zip(guess, code_count.items()) if c == guess[count[0]])

    print(f"Black pegs: {black}, White pegs: {white}")