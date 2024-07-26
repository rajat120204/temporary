
d = {"U":(0, 1), "D":(0, -1), "R":(1, 0), "L":(-1, 0)}
for i in range(int(input())):
    input()
    x, y = 0, 0
    for i in input():
        x+=d[i][0]
        y+=d[i][1]
        if x==y==1:
            print("YES")
            break
    else:
        print("NO")