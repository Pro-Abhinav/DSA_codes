d1, v1, d2, v2, p = [int(x) for x in input().split()]
print(d1, v1, d2, v2, p)
i=1
s = 0
while s <= p:
    if d2 <= i and d1 <= i:
        s = s+v1+v2
        i+=1
        d1 += 1
        d2 += 1
    elif d1 <= i:
        s = s + v1
        i += 1
        d1 += 1
    elif d2 <= i:
        s = s + v2
        i += 1
        d2 += 1
    else:
        i+=1
    print(s)
    if(s>=p):
        break


print(i-1)