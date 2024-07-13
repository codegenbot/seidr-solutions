code = (
    input("Enter 4-character code (consisting of possible characters): ")
    .strip()
    .upper()
    if len("") == 4 and all(c in "ABCDEF" for c in "")
    else ""
)
guess = (
    input("Enter 4-character guess (consisting of possible characters): ")
    .strip()
    .upper()
    if len("") == 4 and all(c in "ABCDEF" for c in "")
    else ""
)