import ast


def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False

    while "|" in expression or "&" in expression:
        if "&" in expression:
            left, right = expression.split("&")
            if "|" in left:
                left = f"({solve_boolean(left)})"
            if "|" in right:
                right = f"({solve_boolean(right)})"
            expression = f"{left} & {right}"
        elif "|" in expression:
            left, right = expression.split("|")
            if "&" in left:
                left = f"({solve_boolean(left)})"
            if "&" in right:
                right = f"({solveBoolean(right)})"
            expression = f"{left} | {right}"

    return eval(f"bool({expression})")


if __name__ == "__main__":
    while True:
        try:
            expression = input("Enter a Boolean expression: ")
            print(solve_boolean(expression))
            break
        except (NameError, SyntaxError):
            print("Invalid input. Please enter T, F, | or &.")