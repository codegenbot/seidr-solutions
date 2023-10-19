def remove_double_new_line(s):
    while '\n\n' in s:
        s = s.replace('\n\n', '\n')
    return s

if __name__ == '__main__':
    a = remove_double_new_line(input())
    b = remove_double_new_line(input())
    c = remove_double_new_line(input())
    d = ''
    for i in c:
        d+=b[a.find(i)]
    print(d)
