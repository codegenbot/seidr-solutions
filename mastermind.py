code = (
    input("Enter 4-character code (consisting of possible characters): ")
    .strip()
    .upper()
)

if len(code) == 4 and all(c in "ABCDEF" for c in code):
    guess = (
        input("Enter 4-character guess (consisting of possible characters): ")
        .strip()
        .upper()
    )
    if len(guess) == 4 and all(c in "ABCDEF" for c in guess):
        # Add the logic to calculate white and black pegs based on code and guess
    else:
        print("Guess should be a 4-character string consisting of characters A, B, C, D, E, F.")
else:
    print("Code should be a 4-character string consisting of characters A, B, C, D, E, F.")