a = input().replace('\n','').replace(' ','')
b = input().replace('\n','').replace(' ','')
c = input().replace('\n','').replace(' ','')
d = ''
for i in c:
    d+=b[a.find(i)]
print(d)
