def solve_boolean(input_str):
    if input_str == "T":
        return True
    elif input_str == "F":
        return False
    elif "&" in input_str:
        operands = input_str.split("&")
        if len(operands) > 2:
            return False
        for op in operands:
            if op not in ["T", "F"]:
                return False
        return all(op == "T" for op in operands)
    elif "|" in input_str:
        operands = input_str.split("|")
        if len(operands) > 2:
            return False
        for op in operands:
            if op not in ["T", "F"]:
                return False
        return any(op == "T" for op in operands)