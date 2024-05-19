#Code by zahid147

n = int(input())
tmp = [[0 for _ in range(n)] for _ in range(n)]
s1 = int(input())
li1 = list(map(int,input().split()))
s2 = int(input())
li2 = list(map(int,input().split()))
temp = True
 
for _ in range(int(input())):
    a,b = map(int,input().split())
    tmp[a-1][b-1] = 1

for i in range(s1-1):
    for j in range(i,s1):
        if tmp[li1[i]-1][li1[j]-1] == 1:
            temp = False
            break
    if not temp: break
if temp:
    for i in range(s2-1):
        for j in range(i,s2):
            if tmp[li2[i]-1][li2[j]-1] == 1:
                temp = False
                break
        if not temp: break
if temp: print("YES")
else: print("NO")
