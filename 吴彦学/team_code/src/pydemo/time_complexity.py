from math import log2
n = 2000
_sum = 0
for i in range(n):
    for j in range(log2(n)):
        _sum += j
print(_sum)
    