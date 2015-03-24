import sys
T = int(sys.stdin.readline())
stones = None

for x in range(T):
    s = sys.stdin.readline()[:-1]
    ans = set()
    for c in s:
        ans.add(c)
    if stones is None:
        stones = ans
    else:
        stones &= ans

print len(stones)