def mastermind(code, guess):
    code_count = {char: code.count(char) for char in set(code)}
    guess_count = {char: guess.count(char) for char in set(guess)}

    black = sum(1 for a, b in zip(code, guess) if a == b)
    
    white = 0
    for char, count in guess_count.items():
        white += min(count, code_count.get(char, 0))
    
    return black, white

code = input("Enter the Mastermind code: ")
guess = input("Enter your guess: ")

print(f"Black: {mastermind(code, guess)[0]}, White: {mastermind(code, guess)[1]}")