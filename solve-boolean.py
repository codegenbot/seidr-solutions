def solveBoolean(inputString):
    def bool_eval(expression):
        while '&' in expression or '|' in expression:
            if '&' in expression:
                start = 0
                end = len(expression)
                for i in range(len(expression)):
                    if expression[i] == '&':
                        end = i
                    elif expression[i] == '(' and expression[end-1] != '(':
                        start = i+1
                        break
                return (bool_eval(expression[:start]) and bool_eval(expression[start:end])) or bool_eval(expression[end:])
            else:
                start = 0
                end = len(expression)
                for i in range(len(expression)):
                    if expression[i] == '|':
                        end = i
                    elif expression[i] == '(' and expression[end-1] != '(':
                        start = i+1
                        break
                return (bool_eval(expression[:start]) or bool_eval(expression[start:end])) if expression[0] != '(' else bool_eval(expression[1:end-1])
        return {'T': True, 'F': False}[expression]

    return bool_eval(inputString)