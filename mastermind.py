```
def mastermind(code, guess):
    black = sum(1 for a, b in zip(code, guess) if a == b)
    guess_count = {char: guess.count(char) for char in set(guess)}
    
    white = 0
    for char, count in guess_count.items():
        white += min(count, code.count(char))
    black -= max(white - sum(1 for a, b in zip(code, guess) if a != b), 0)

    return black, white

code = input("Enter the Mastermind code: ")
guess = input("Enter your guess: ")

print(f"Black: {mastermind(code, guess)[0]}, White: {mastermind(code, guess)[1]}")