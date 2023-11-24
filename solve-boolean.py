import re

def solve_boolean(expression):
    expression = expression.replace('T', 'True').replace('F', 'False')
    expression = re.sub(r'([^|&])', r'\1 ', expression)
    expression = re.sub(r'[^T|F& ]', '', expression)
    return eval(expression)