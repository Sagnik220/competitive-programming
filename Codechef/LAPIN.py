


# cook your dish here
for _ in range(int(input())):
    s=input()
    l=len(s)
    a=sorted(s[:l//2])
    b=sorted(s[l//2+(l%2):])
    if(a==b):
        print("YES")
    else:
        print("NO")