```
def solve_boolean(expression):
    try:
        if expression == "T":
            return True
        elif expression == "F":
            return False

        while " && " in expression or " || " in expression:
            if " && " in expression:
                left, right = expression.split(" && ")
                expression = f"({str(bool(solve_boolean(left)))} and {str(bool(solve_boolean(right)))})"
            elif " || " in expression:
                left, right = expression.split(" || ")
                expression = f"({str(bool(solve_boolean(left)))} or {str(bool(solve_boolean(right)))})"

        return eval(f"{expression}")
    except Exception as e:
        print(f"Invalid input: {e}. Please enter T, F, (T/F) && (T/F), or (T/F) || (T/F)")