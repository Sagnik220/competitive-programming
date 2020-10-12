# cook your dish here
import math

for _ in range(int(input())):
    c,r=map(int,input().split())
    c=math.ceil(c/9)
    r=math.ceil(r/9)
    if r<=c:
        print(1,r)
    else:
        print(0,c)
