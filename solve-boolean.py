def solve_boolean(input_string):
    if input_string == "T":
        return True
    elif input_string == "F":
        return False
    elif "&" in input_string:
        operands = input_string.split("&")
        result = True
        for operand in operands:
            if operand == "T":
                result = True
            else:
                result = False
                break
        return result
    elif "|" in input_string:
        operands = input_string.split("|")
        result = False
        for operand in operands:
            if operand == "T":
                result = True
                break
        return result