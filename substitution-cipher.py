if __name__ == '__main__':
    a = input()
    b = input()
    c = input()
    d = ''
    for i in c:
        if i == '\n':
            continue
        d+=b[a.find(i)]
    print(d)
