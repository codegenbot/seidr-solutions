```
def solve_boolean(expression):
    def parse(expression):
        if expression == 'T':
            return True
        elif expression == 'F':
            return False
        elif '&' in expression:
            left, right = expression.split('&')
            return parse(left) and parse(right)
        elif '|' in expression:
            left, right = expression.split('|')
            return parse(left) or parse(right)
        else:
            return None

    while '&' in expression:
        expression = expression.replace('T&T', 'T').replace('F&F', 'F').\
                     replace('T&F', 'F').replace('F&T', 'F')
        expression = expression.replace('|T|T', 'T').replace('|F|F', 'F').\
                     replace('|T|F', 'F').replace('|F|T', 'F')

    return parse(expression)