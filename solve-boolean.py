def solve_boolean(expression):
    result = False
    curr_op = None

    for char in expression:
        if char == "t" and (curr_op == "|" or curr_op == None):
            result = True
        elif char == "f" and (curr_op == "&" or curr_op == None):
            result = False
        elif char == "|":
            curr_op = "|"
        elif char == "&":
            curr_op = "&"

    if expression[-1] == "t" or expression[-1] == "f":
        return result
    else:
        return None


print(solve_boolean("t|t|t|t|t&t&t&t|f&f&t|t|f|t|f|f&t|t|t"))