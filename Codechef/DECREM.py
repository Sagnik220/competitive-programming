# cook your dish here
t=int(input())
while(t!=0):
    t=t-1
    l,r=map(int,input().split())
    if(r>=2*l):
        print(-1)
    else:
        print(r)