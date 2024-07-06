def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False

    operators = "&" | "|"
    parts = expression.split(next((c for c in operators if c in expression), ""))

    def evaluate_and(parts):
        result = None
        for part in parts:
            if result is None:
                result = solve_boolean(part)
            elif not solve_boolean(part):
                return False
        return result

    def evaluate_or(parts):
        result = None
        for part in parts:
            if result is not None and solve_boolean(part) == result:
                return result
            elif solve_boolean(part):
                result = True
        return result if result else False

    if expression.count("&") > 0:
        return evaluate_and(parts)
    else:
        return evaluate_or(parts)