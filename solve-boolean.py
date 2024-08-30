```
def solveBoolean(inputStr):
    if inputStr == "T":
        return True
    elif inputStr == "F":
        return False
    elif len(inputStr) > 1:
        if inputStr[0] == "&" and inputStr[1] == "&":
            return solveBoolean(inputStr[2:]) and solveBoolean(inputStr[:2])
        elif inputStr[0] == "|" and inputStr[1] == "|":
            return solveBoolean(inputStr[2:]) or solveBoolean(inputStr[:2])