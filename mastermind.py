def mastermind(code, guess):
    black = sum(1 for a, b in zip(code, guess) if a == b)
    return black, 4 - black

code = input("Enter the Mastermind code: ")
guess = input("Enter your guess: ")

print(f"Black: {mastermind(code, guess)[0]}, White: {mastermind(code, guess)[1]}")