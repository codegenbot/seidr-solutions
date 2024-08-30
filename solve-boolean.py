```
def solve.Boolean(expression):
    def evaluate_expression(s):
        if s == 'T':
            return True
        elif s == 'F':
            return False
        elif s[0] == '&':
            return evaluate_expression(s[1:]) and evaluate_expression(s[2:])
        elif s[0] == '|':
            return evaluate_boolean_or(s)
    def evaluate_boolean_or(s):
        if '&' in s or '|' in s:
            raise ValueError("Invalid expression")
        return any(evaluate_expression(c) for c in s)
    return evaluate_expression(expression)