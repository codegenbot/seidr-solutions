```
def mastermind(code, guess):
    code_counts = {char: code.count(char) for char in set(code)}
    guess_counts = {char: guess.count(char) for char in set(guess)}

    black = sum(min(code_counts.get(char, 0), guess_counts.get(char, 0)) 
                for char in set(code))
    white = sum(min(code_counts.get(char, 0), guess_counts.get(char, 0)) - 
                min(code_counts.get(char, 0), guess_counts.get(char, 0)) or 0 
                for char in set(guess))

    return black, white

code = input("Enter the Mastermind code: ")
guess = input("Enter your guess: ")

print(f"Black: {mastermind(code, guess)[0]}, White: {mastermind(code, guess)[1]}")