def solve_boolean(boolean_expression):
    if boolean_expression == "T":
        return True
    elif boolean_expression == "F":
        return False
    elif boolean_expression == "|":
        return False  # This is not a valid boolean expression, so we default to False
    elif boolean_expression == "&":
        return False  # This is not a valid boolean expression, so we default to False
    else:
        first, operator, second = boolean_expression.split()
        if operator == "|":
            return solve_boolean(first) or solve_boolean(second)
        elif operator == "&":
            return solve_boolean(first) and solve_boolean(second)