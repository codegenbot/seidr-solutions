def solveBoolean(expression):
    def boolean_operator(op, a, b):
        if op == "&":
            return a and b
        elif op == "|":
            return a or b

    result = True
    operator = ""
    for char in expression:
        if char in ["&", "|"]:
            a = (char == "&") ^ result
            operator = char
            result = False
        elif char in ["T", "t"]:
            result = char == "T"
        elif char in ["F", "f"]:
            result = char == "F"

    if not result:
        boolean_operator(operator, *map(lambda x: x == "T", [result, True]))

    return result