# cook your dish here
t=int(input())
while(t>0):
  t-=1
  n=int(input())
  count=0;a=[]
  for i in range(n):
    a.append([int(x) for x in input().split()])
  for i in range(n-1,0,-1):
    b=a[i][i-1]+1
    if b!=a[i][i]:
      count+=1
      flow=i+1
      for i in range(flow):
        for j in range(i,flow):
          trav=a[i][j]
          a[i][j]=a[j][i]
          a[j][i]=trav

  print(count)
