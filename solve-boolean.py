```
def solve_boolean(expression):
    def evaluate():
        temp = True if expression[0] == 'T' else False
        i = 1
        while i < len(expression):
            if expression[i] in ['|', '&']:
                operator = expression[i]
                i += 1
                if operator == '|':
                    temp = temp or evaluate()
                elif operator == '&':
                    temp = temp and evaluate()
                return temp
            elif expression[i] == '(':
                i = evaluate() + 1
            elif expression[i] in ['|', '&']:
                i += 2
            elif expression[i] != 'T' and expression[i] != 'F':
                if expression[i] == '(':
                    temp = evaluate()
                else:
                    return expression[i] == 'T'
        return temp

    stack = []
    result = True if expression[0] == 'T' else False
    i = 1
    while i < len(expression):
        if expression[i] in ['|', '&']:
            operator = expression[i]
            i += 1
            if operator == '(':
                stack.append('(')
            elif operator == ')':
                while stack and stack[-1] != '(':
                    result = result ^ (stack.pop() == 'F')
                stack.pop()
        elif expression[i] == '(':
            stack.append('(')
        elif expression[i] == ')':
            temp = evaluate()
            i = temp + 1
        i += 1
    return result