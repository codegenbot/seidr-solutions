def solve_boolean(expression):
    def evaluate():
        nonlocal result
        temp = True if expression[0] == 'T' else False
        i = 1
        while i < len(expression):
            if expression[i] in ['|', '&']:
                operator = expression[i]
                i += 1
                if operator == '|':
                    result = result | evaluate()
                elif operator == '&':
                    result = result & evaluate()
                return 'T' if result else 'F'
            elif expression[i] == '(':
                i = evaluate() + 1
            elif expression[i] in ['|', '&']:
                i += 2
            elif expression[i] != 'T' and expression[i] != 'F':
                if expression[i] == '(':
                    result = evaluate()
                else:
                    return 'T' if expression[i] == 'T' else 'F'
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
    return 'T' if result else 'F'