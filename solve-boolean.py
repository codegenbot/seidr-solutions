```
def solve_boolean(expression):
    def parseBoolean(s):
        if s[0] == '(':
            end = s.find(')')
            if end != -1:
                return parseBoolean(s[1:end])
        if s.startswith("T"):
            return True
        if s.startswith("F"):
            return False
        if s == 'T':
            return True
        if s == 'F':
            return False
        if s in ['|', '&']:
            return {'|': lambda a, b: a or b, '&': lambda a, b: a and b}[s]
        return None

    def evaluateBoolean(stack):
        result = parseBoolean(stack.pop(0))
        while stack:
            op = stack.pop()
            operand = parseBoolean(stack.pop(0))
            if op == '|':
                result = lambda x, y: x or y(result)
            elif op == '&':
                result = lambda x, y: x and y(result)
        return result

    return bool(evaluateBoolean(expression.replace("T", "True").replace("F", "False").split()))