def solveBoolean(inputString):
    if inputString == "T":
        return True
    elif inputString == "F":
        return False
    elif "&" in inputString and "|" in inputString:
        raise ValueError("Invalid expression")
    elif "&" in inputString:
        left, right = inputString.split("&")
        return not (solveBoolean(left) and solveBoolean(right))
    elif "|" in inputString:
        left, right = inputString.split("|")
        return solveBoolean(left) or solveBoolean(right)