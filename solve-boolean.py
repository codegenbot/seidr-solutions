```
import ast


def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False

    while " && " in expression or " || " in expression or " | " in expression:
        if " && " in expression:
            left, right = expression.split(" && ")
            expression = f"({str(bool(solve_boolean(left)))} and {str(bool(solve_boolean(right)))})"
        elif " || " in expression or " | " in expression:
            left, right = expression.split(" || ") if " || " in expression else (expression.split(" | "))[0]
            right = expression.split(" || ")[1] if " || " in expression else expression.split(" | ")[1]
            expression = f"({str(bool(solve_boolean(left)))} {right[0].strip()} {right[1:-1].strip()}{right[-1].strip()})"

    return eval(f"{expression}")


if __name__ == "__main__":
    expression = input("Enter a Boolean expression: ")
    print(solve_boolean(expression))