def solve_boolean(bool_expr):
    if bool_expr == "T":
        return True
    elif bool_expr == "F":
        return False
    elif "&" in bool_expr and "|" in bool_expr:
        raise ValueError("Invalid expression")
    elif "&" in bool_expr:
        a, b = bool_expr.split("&")
        return not (bool(a) and bool(b))
    elif "|" in bool_expr:
        a, b = bool_expr.split("|")
        return bool(a) or bool(b)