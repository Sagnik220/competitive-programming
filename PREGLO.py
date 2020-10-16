# cook your dish here
t=int(input())
while(t!=0):
    a=input().strip().replace("oreee gelooo","")
    l=len(a)
    temp=0
    for i in range(l):
        temp+=(ord(a[i])-96)*(26**(l-i-1))
    print(temp)
    t=t-1
    