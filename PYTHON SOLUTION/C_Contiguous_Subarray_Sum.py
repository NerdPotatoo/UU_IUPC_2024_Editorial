#Code by zahid147

n,k = map(int,input().split())
li = list(map(int,input().split()))
sum_map,sum,mx = {},0,0
 
for i in range(n):
    sum += li[i]
    if sum == k:
        mx = i + 1
    if sum-k in sum_map: #sum_map[sum-k] != 0
        mx = max(mx, i - sum_map[sum-k])
    if sum not in sum_map:
        sum_map[sum] = i
print(mx)