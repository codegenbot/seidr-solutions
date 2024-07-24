def solveBoolean(input_string):
    if input_string == "T":
        return True
    elif input_string == "F":
        return False
    else:
        for i in range(len(input_string)):
            if input_string[i] == "&":
                return (
                    input_string[:i].lower() == "t"
                    and input_string[i + 1 :].lower() == "t"
                )
            elif input_string[i] == "|":
                return input_string.lower().index("t") < input_string.lower().index("|")