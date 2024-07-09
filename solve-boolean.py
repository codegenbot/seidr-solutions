```Python
def solve_boolean(boolean_expression):
    if boolean_expression == 'T':
        return True
    elif boolean_expression == 'F':
        return False

    result = None
    temp = ''
    for char in boolean_expression:
        temp += char
        if (char == '&' or char == '|') and temp != '(':
            if temp == 'T':
                temp = True
            elif temp == 'F':
                temp = False
            if not result:
                result = bool(temp)
            else:
                if result == True and temp == '|':
                    return True
                elif result == False and temp == '&':
                    return False
                elif char == '&':
                    result = result and bool(temp)
                elif char == '|':
                    result = result or bool(temp)
            temp = ''
        elif char == '(':
            if not result:
                result = solve_boolean(temp + ')')
            else:
                return None

    if temp:
        if temp == 'T':
            temp = True
        elif temp == 'F':
            temp = False
        if not result:
            result = bool(temp)
        else:
            if result == True and temp == '|':
                return True
            elif result == False and temp == '&':
                return False
            elif temp == '&':
                result = result and bool(temp)
            elif temp == '|':
                result = result or bool(temp)

    return result