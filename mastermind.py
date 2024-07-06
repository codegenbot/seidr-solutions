```
def mastermind():
    code = list(input("Enter the Mastermind code: "))
    guess = list(input("Enter your guess: "))

    code_count = {}
    for c in code:
        if c in code_count:
            code_count[c] += 1
        else:
            code_count[c] = 1

    white = sum(min(count, guess.count(c)) for c, count in code_count.items())
    black = sum([c in code and c == guess[i] for i, c in enumerate(guess)].count(True))
    
    print(f"Black pegs: {black}, White pegs: {white}")