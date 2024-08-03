def solveBoolean(inputStr):
    if inputStr == 'T':
        return True
    elif inputStr == 'F':
        return False
    elif '&' in inputStr and '|' in inputStr:
        raise Exception("Invalid expression")
    elif '&' in inputStr:
        a, b = inputStr.split('&')
        return not (bool(a) and bool(b))
    elif '|' in inputStr:
        a, b = inputStr.split('|')
        return bool(a) or bool(b)
    else:
        raise Exception("Invalid expression")