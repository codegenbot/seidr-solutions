def solve(my_string):
    return sum(int(i) for i in my_string if my_string[my_string.index(i)+1] == i)