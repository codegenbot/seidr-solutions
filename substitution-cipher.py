a = input().replace('\n','').replace('\r','')
b = input().replace('\n','').replace('\r','')
c = input().replace('\n','')
d = ''
for i in c:
    d+=b[a.find(i)]
print(d)
