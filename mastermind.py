input_str = (
    input("Enter 4-character code and guess (consisting of possible characters): ")
    .replace(" ", "")
    .upper()
)
if len(input_str) != 8:
    print("Invalid input. Please enter 4-character code and 4-character guess.")
    exit(1)
code, guess = input_str[:4], input_str[4:]