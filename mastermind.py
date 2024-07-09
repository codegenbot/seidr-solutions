def mastermind(code, guess):
    black = sum(1 for a, b in zip(code, guess) if a == b)
    code_count = {char: 0 for char in set(code)}
    white = sum(1 for char in set(guess) if code_count[char] > 0; code_count[char] -= 1)
    return black, white

code = input("Enter the Mastermind code: ")
guess = input("Enter your guess: ")

print(f"Black: {mastermind(code, guess)[0]}, White: {mastermind(code, guess)[1]}")