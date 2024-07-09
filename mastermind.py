def mastermind(code, guess):
    black = sum(1 for a, b in zip(code, guess) if a == b)
    code_set = set(code)
    white = sum(1 for a, b in zip(code, guess) if (a in code_set and a != b) or (b in code_set and b != a))
    return black, white

code = input("Enter the Mastermind code: ")
guess = input("Enter your guess: ")

print(f"Black: {mastermind(code, guess)[0]}, White: {mastermind(code, guess)[1]}")