def solveBoolean(input):
    if input == "T":
        return True
    elif input == "F":
        return False
    elif len(input) < 2:
        return False
    else:
        op = input[1]
        bool_val = [input[0] == "T", input[0] == "F"]
        if op == "&":
            return bool_val[0] and bool_val[1]
        elif op == "|":
            return bool_val[0] or bool_val[1]