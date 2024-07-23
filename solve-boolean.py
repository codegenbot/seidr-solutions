```
s = input()  
s = ' '.join(s.split())  

def evaluate_bool_expression(expression):
    stack = []
    result = False
    for char in expression:
        if char in ['T', 'F']:
            if char == 'T':
                result = True
            else:
                result = False
        elif char == '|':
            result = not result 
        elif char == '&':
            temp = result
            result = False
        elif result:
            stack.append(result)
            result = False
    while stack and len(stack) == 1:
        stack.pop()
    return 'T' if stack else 'F'