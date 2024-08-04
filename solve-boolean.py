def solveBoolean(input):
    if input == "T":
        return True
    elif input == "F":
        return False
    elif "&" in input and "|" in input:
        a, op, b = input.split(op)
        a = a.strip() == "T"
        b = b.strip() == "T"
        if op == "&":
            return a and b
        else:
            return a or b
    elif "&" in input:
        a, b = input.split("&")
        a = a.strip() == "T"
        b = b.strip() == "T"
        return a and b
    elif "|" in input:
        a, b = input.split("|")
        a = a.strip() == "T"
        b = b.strip() == "T"
        return a or b