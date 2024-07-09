```python
def mastermind(code, guess):
    black = sum(1 for a, b in zip(code, guess) if a == b)
    white_count = {char: code.count(char) for char in set(guess)}
    white = sum(min(count, code.count(char)) for char, count in white_count.items() if count > 0)

    return black, white

code = input("Enter the Mastermind code: ")
guess = input("Enter your guess: ")

print(f"Black: {mastermind(code, guess)[0]}, White: {mastermind(code, guess)[1]}")