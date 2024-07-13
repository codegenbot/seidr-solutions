code, guess = input("Enter 4-character code and guess (consisting of possible characters):").strip().upper().split()
if len(code) != 4 or len(guess) != 4:
    print("Invalid input. Please enter 4-character code and 4-character guess.")
    exit(1)
white_pegs = sum(min(code.count(char), guess.count(char)) for char in set(guess))
black_pegs = sum(a == b for a, b in zip(code, guess))
print(white_pegs, black_pegs)