def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    result = True  

    parts = expression.split('&')
    for part in parts:
        part = part.strip()
        if part:  
            result = result and bool(eval(part.replace('|', 'or').replace('and', '&')))
            if not result:  # If the result becomes False, break the loop
                break

    return str(result)