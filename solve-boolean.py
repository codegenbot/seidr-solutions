def solve_boolean(bool_expr):
    if bool_expr == "T":
        return True
    elif bool_expr == "F":
        return False
    elif "&" in bool_expr:
        a, b = bool_expr.split("&")
        return bool(a) and bool(b)
    else:
        a, b = bool_expr.split("|")
        return bool(a) or bool(b)