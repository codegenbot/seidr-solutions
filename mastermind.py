code = (
    input("Enter 4-character code (consisting of possible characters): ")
    .strip()
    .upper()
)
code = code if len(code) == 4 and all(c in "ABCDEF" for c in code) else ""

guess = (
    input("Enter 4-character guess (consisting of possible characters): ")
    .strip()
    .upper()
)
guess = guess if len(guess) == 4 and all(c in "ABCDEF" for c in guess) else ""