def solveBoolean(inputStr):
    if inputStr == 'T':
        return True
    elif inputStr == 'F':
        return False
    elif '&' in inputStr:
        a, b = map(solveBoolean, inputStr.split('&'))
        return a and b
    elif '|' in inputStr:
        a, b = map(solveBoolean, inputStr.split('|'))
        return a or b