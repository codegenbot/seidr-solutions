def solve(input):
    if input == "t":
        return True
    elif input == "f":
        return False
    elif "&" in input and "|" in input:
        left, right = input.split("&")
        left = left.strip()
        right = right.strip()
        if "|" in left:
            left = eval(left)
        else:
            left = left == "t"
        if "|" in right:
            right = eval(right)
        else:
            right = right == "t"
        return left and right
    elif "&" in input:
        left, right = input.split("&")
        left = left.strip()
        right = right.strip()
        if "|" in left:
            left = eval(left)
        else:
            left = left == "t"
        if "|" in right:
            right = eval(right)
        else:
            right = right == "t"
        return left and right
    elif "|" in input:
        left, right = input.split("|")
        left = left.strip()
        right = right.strip()
        if "&" in left:
            left = eval(left)
        else:
            left = left == "t"
        if "&" in right:
            right = eval(right)
        else:
            right = right == "t"
        return left or right
    elif "|" in input and "&" not in input:
        left, right = input.split("|")
        left = left.strip()
        right = right.strip()
        return eval(left) or eval(right)