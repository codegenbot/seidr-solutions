def solve(input):
    if input == "t":
        return True
    elif input == "f":
        return False
    else:
        for i in range(len(input) - 1):
            if input[i] == "&" and input[i + 1] == "&":
                return False
        for i in range(0, len(input), 2):
            if input[i : i + 2] == "t&":
                return False
        return eval(input.replace("&", "**").replace("|", "+"))