```
def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    result = True  # Assume the result is True initially

    parts = expression.split('&')
    for part in parts:
        part = part.strip()
        if part:  # If the part is not empty
            result = result and bool(eval(part.replace('|', 'or').replace('and', '&')))
            if not result:  # If the result becomes False, break the loop
                break

    return str(result)

def solve(input):
    return solve_boolean(input)