def solve_boolean(bool_expr):
    if bool_expr == "t":
        return True
    elif bool_expr == "f":
        return False
    elif "&" in bool_expr and "|" in bool_expr:
        raise ValueError("Invalid expression")
    else:
        return eval("bool({})".format(bool_expr.replace("&", "&").replace("|", "|")))