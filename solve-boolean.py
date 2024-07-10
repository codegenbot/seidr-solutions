```
def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    stack = []
    temp = ''
    for char in expression:
        if char in ['&', '|']:
            if temp: 
                if temp == 'T':
                    stack.append(True)
                else: 
                    stack.append(False)
                temp = ''
            if char == '&':
                stack.append((stack.pop() and stack.pop()))
            elif char == '|':
                stack.append((stack.pop() or stack.pop()))
        else:
            temp += char
    if temp: 
        if temp == 'T':
            stack.append(True)
        else: 
            stack.append(False)
    return stack[0]