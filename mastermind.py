import re


def mastermind(code, guess):
    # Initialize variables to keep track of white and black pegs
    white_pegs = 0
    black_pegs = 0

    # Iterate through each character in the code and guess
    for i in range(len(code)):
        if code[i] == guess[i]:
            black_pegs += 1
        elif code[i] in guess:
            white_pegs += 1

    # Return the number of white and black pegs
    return (white_pegs, black_pegs)


# Get input from user
code = input("Enter Mastermind code: ")
guess = input("Enter guess: ")

# Check for valid input
if re.match(r"^[0-5]{4}$", code) and re.match(r"^[0-5]{4}$", guess):
    # Call mastermind function with input
    result = mastermind(code, guess)
else:
    print(
        "Invalid input! Please enter a 4-character string consisting only of the characters '0', '1', '2', '3', '4', and '5'."
    )
    sys.exit()

# Print output
print(f"White pegs: {result[0]}, Black pegs: {result[1]}")