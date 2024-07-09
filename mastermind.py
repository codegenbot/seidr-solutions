def mastermind(code, guess):
    black = sum(1 for a, b in zip(code, guess) if a == b)
    
    white = 0
    for char in set(guess):
        white += min(code.count(char), guess.count(char))
    black -= sum(min(code.count(char), guess.count(char)) for char in set(guess) if code.count(char) > guess.count(char))

    return black, white

code = input("Enter the Mastermind code: ")
guess = input("Enter your guess: ")

print(f"Black: {mastermind(code, guess)[0]}, White: {mastermind(code, guess)[1]}")