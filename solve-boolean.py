def solve(input_str):
    if input_str == "T":
        return True
    elif input_str == "F":
        return False
    elif len(input_str) > 1:
        result = None
        for term in input_str.split("&"):
            if result is None:
                result = eval(term)
            else:
                result = result and eval(term)
        return result
    else:
        return eval(input_str)