def solve_boolean(expression):
    def boolean_operator(operator, a, b):
        if operator == "|":
            return a or b
        elif operator == "&":
            return a and b

    if expression == "t":
        return True
    elif expression == "f":
        return False
    else:
        result = True
        i = 0
        while i < len(expression):
            if expression[i] in ["|", "&"]:
                operator = expression[i]
                a = expression[i - 1] == "t"
                b = expression[i + 1] == "t"
                result = boolean_operator(operator, a, b)
                i += 2
            else:
                i += 1
        return result