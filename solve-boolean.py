import re

def solve_boolean(expression):
    return eval(re.sub(r'T|F', lambda x: 'True' if x.group() == 'T' else 'False', expression.replace('&', 'and').replace('|', 'or')))