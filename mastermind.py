input_str = (
    input("Enter 4-character code and guess (consisting of possible characters): ")
    .strip()
    .upper()
)
if len(input_str) != 9:
    print("Invalid input. Please enter 4-character code and 4-character guess.")
    exit(1)
code, guess = input_str.split()
white_pegs = sum(min(code.count(char), guess.count(char)) for char in set(guess))
black_pegs = sum(a == b for a, b in zip(code, guess))
print(white_pegs, black_pegs)