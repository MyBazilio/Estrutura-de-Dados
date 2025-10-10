n = 10
total = sum(range(1, n+1))
print("sum of 1..10 =", total)
a,b = 0,1
fibs = []
for _ in range(10):
    fibs.append(a)
    a,b = b, a+b
print(fibs)