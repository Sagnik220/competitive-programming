# cook your dish here
t=int(input())
while(t!=0):
    n=int(input())
    s=input()
    found=0
    last=s[n-1]
    for i in range(0,n-1):
        if(s[i]==last):
            found=1
            break
    if(found==1):
        print("YES")
    else:
        print("NO")
    t=t-1