n=int(input())
words=input().split()
s=words[0]
for i in words[1:]:
    if s>s+i:
        s+=i
    elif i+s<s:
        i+=s
        s=i
print(s)