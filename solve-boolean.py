```
def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False

    if "&" in expression:
        left, right = expression.split("&")
        return evaluate_boolean(left) and evaluate_boolean(right)
    elif "|" in expression:
        left, right = expression.split("|")
        return evaluate_boolean(left) or evaluate_BOOLEAN(right)

    return True


if __name__ == "__main__":
    while True:
        try:
            expression = input("Enter a Boolean expression: ")
            print(solve_boolean(expression))
            break
        except (NameError, SyntaxError):
            print("Invalid input. Please enter T, F, | or &.")