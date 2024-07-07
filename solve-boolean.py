import re


def solve_boolean(expression):
    # Use regular expression to match the operator and operands
    result = re.match(r"^(t|f)(\||\&)(t|f)$", expression)
    if result:
        left, right = result.groups()
        return solve_boolean(left) | solve_boolean(right)
    # Handle parentheses
    elif "(" in expression and ")" in expression:
        start, end = expression.index("("), expression.index(")")
        inner = expression[start + 1 : end]
        result = solve_boolean(inner)
        return result
    # Handle other operators
    elif expression.startswith("!"):
        operand = expression[1:]
        result = solve_boolean(operand)
        return not result
    else:
        raise ValueError("Invalid expression")