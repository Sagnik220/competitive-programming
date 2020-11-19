# cook your dish here
t=int(input())
while(t>0):
    t=t-1
    n=int(input())
    b=[int(x) for x in input().split()]
    c=set(b)
    if 0 in c:
        c.remove(0)
    l1=len(c)
    print(l1)
        