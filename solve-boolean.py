```
def solve_boolean(expression):
    def apply_operator(operator, left, right):
        if operator == '&':
            return bool(left) and bool(right)
        elif operator == '|':
            return bool(left) or bool(right)

    stack = []
    tokens = []

    for char in expression:
        if char.isspace():
            continue
        elif char.isalpha():
            while True:
                stack.append(char)
                try:
                    if stack.pop() != '(':
                        break
                except IndexError:
                    pass
        else:
            tokens.append(char)

    result = None

    def solve_token(token):
        nonlocal result
        if token == 'T':
            return True
        elif token == 'F':
            return False
        elif token in '&|(':
            if token == '(':
                result = '('
            else:
                left, operator, right = stack.pop(), stack.pop(), stack.pop()
                result = str(apply_operator(operator, left, right))
                while len(stack) and stack[-1] != '(':
                    stack.pop()

    for token in tokens + list(reversed(stack)):
        solve_token(token)

    return eval(result.lstrip('(').rstrip(')'))