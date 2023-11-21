def solve_boolean(expression):
    result = False
    curr_op = None

    for char in expression:
        if char == "t":
            if curr_op == "|" or curr_op == None:
                result = True
            elif curr_op == "&":
                result = result and True
        elif char == "f":
            if curr_op == "&" or curr_op == None:
                result = False
            elif curr_op == "|":
                continue
        elif char == "|":
            curr_op = "|"
        elif char == "&":
            curr_op = "&"

    return result