def solve_boolean(input_str):
    if input_str == 'T':
        return True
    elif input_str == 'F':
        return False
    elif '&' in input_str and '|' in input_str:
        raise Exception("Invalid expression")
    else:
        if '&' in input_str:
            left, right = input_str.split('&')
        else:
            left = input_str
            right = ''
        
        return (left == 'T' and right == '') or (left == '' and right == 'T') or ((left == 'T' or left == 'F') and (right == 'T' or right == 'F'))