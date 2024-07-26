t=int(input())
for _ in range(t):
    n=int(input())
    a=list(map(int, input().split()))
    b=list(map(int, input().split()))
    count=0
    for i in range(n):
        if a[i]!=b[i]: count+=1
    print(min(count,abs(a.count(1)-b.count(1))+1))