def solve_boolean(boolean_expression):
    result = True if boolean_expression else False

    for char in boolean_expression:
        if char == "&":
            result = result and (
                boolean_expression[boolean_expression.index(char) + 1 :] or "t"
            )
        elif char == "|":
            result = result or (
                boolean_expression[boolean_expression.index(char) + 1 :] or "t"
            )

    return result