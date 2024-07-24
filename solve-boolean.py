```
import re

def solveBoolean(input_str):
    if input_str == "t":
        return True
    elif input_str == "f":
        return False
    else:
        while "&" in input_str or "|" in input_str:
            input_str = re.sub('(&&)|\|\|', lambda m: 'and' if m.group() == '&&' else 'or', input_str)
        return bool(eval(input_str))