def solve_boolean(expression):
    def bool_to_bool(val):
        return val == "T"

    def or_operator(a, b):
        return bool_to_bool(a) or bool_to_bool(b)

    def and_operator(a, b):
        return bool_to_bool(a) and bool_to_bool(b)

    if expression[-1] in "&|":
        return and_operator(expression[:-1], solve_boolean(expression[:-1].rstrip()))
    elif "&" in expression:
        return and_operator(*map(solve_boolean, re.findall("[TF&|]", expression)))
    elif "|" in expression:
        return or_operator(*map(solve_boolean, re.findall("[TF&|]", expression)))
    else:
        return bool_to_bool(expression)