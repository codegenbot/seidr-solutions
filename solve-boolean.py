def solveBoolean(inputString):
    def boolOp(op, a, b):
        if op == '|':
            return a or b
        elif op == '&':
            return a and b
        else:
            raise Exception("Invalid operator")

    result = True if inputString == 't' else False
    
    for i in range(len(inputString) - 1):
        op = inputString[i]
        left = result
        result = boolOp(op, left, inputString[i+1] == 't')
    
    return result