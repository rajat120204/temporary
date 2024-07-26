t=int(input())
for _ in range(t):
    n=int(input())
    a=list(map(int, input().split()))
    print(n-a.count(1)//2)