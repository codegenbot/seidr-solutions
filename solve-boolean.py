def solveBoolean(input_str):
    if input_str == "t":
        return True
    elif input_str == "f":
        return False
    else:
        for i in range(len(input_str)):
            if input_str[i] == "&":
                return bool(eval(input_str[:i])) and bool(eval(input_str[i + 1 :]))
            elif input_str[i] == "|":
                return bool(eval(input_str[:i])) or bool(eval(input_str[i + 1 :]))