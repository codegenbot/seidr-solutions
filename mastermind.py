def mastermind(code, guess):
    black = sum(1 for a, b in zip(code, guess) if a == b)
    white = 4 - black - sum(1 for c in set(guess) if c in code and c != guess[guess.index(c)])
    return black, white

code = input("Enter the Mastermind code: ")
guess = input("Enter your guess: ")

print(f"Black: {mastermind(code, guess)[0]}, White: {mastermind(code, guess)[1]}")