def solve_boolean(expression):
    def parse_expression(e):
        if e == "T":
            return True
        elif e == "F":
            return False
        elif e in ["|", "&"]:
            return any(parse_expression(x) for x in expression.split(e))

    return parse_expression(expression)