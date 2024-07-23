```
def evaluate_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False

    if "&" in expression:
        parts = expression.split("&")
        if len(parts) > 1:
            return all(evaluate_boolean(part) for part in parts)
        else:
            raise ValueError("Invalid input. Please enter T, F, | &.")
    elif "|" in expression:
        parts = expression.split("|")
        if len(parts) > 1:
            return any(evaluate_boolean(part) for part in parts)
        else:
            raise ValueError("Invalid input. Please enter T, F, | &.")

if __name__ == "__main__":
    while True:
        try:
            expression = input("Enter a Boolean expression: ")
            print(evaluate_boolean(expression))
            break
        except (ValueError, SyntaxError):
            print("Invalid input. Please enter T, F, | or &.")