```
def solve_boolean(expression):
    def evaluate(node):
        if node[0] == 'T':
            return True
        elif node[0] == 'F':
            return False
        else:
            left = evaluate((node[1],))
            right = evaluate((node[2],))
            if node[0] == '|':
                return left or right
            else:
                return left and right
    
    nodes = re.findall('[TF]|&|', expression)
    return evaluate(tuple(nodes))