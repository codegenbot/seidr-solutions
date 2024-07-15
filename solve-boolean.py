```
def solve_boolean(expression):
    def evaluate(tokens):
        if not tokens:
            return True
        token = next(token for _ in range(len(tokens)), None)
        if token == '(':
            i = 1
            for t in tokens[1:]:
                if t == '(':
                    i += 1
                elif t == ')':
                    i -= 1
                if i == 0:
                    return evaluate(tokens[1:tokens.index(t)+1])
            return evaluate(tokens[1:])
        token = ''.join(token for token in (token for _ in range(len(tokens))))[0]
        if token.lower() in 'tf':
            return {'T': True, 'F': False}[token.upper()]
        elif token in 'orand':
            op = {'or': lambda a, b: a or b, 'and': lambda a, b: a and b}[token]
            return op(evaluate(tokens[1]), evaluate(tokens[2:-1]))
    expression = expression.replace("T", "True").replace("F", "False")
    tokens = iter(expression.replace('(', ' ( ').replace(')', ' ) ').split())
    return bool(evaluate(tokens))