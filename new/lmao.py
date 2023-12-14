a=[1,55,6,44,8,5,63,44]
max = a[0]
for i in range(1,len(a)):
    if a[i] > max:
        max = a[i]
a.remove(max)
max = a[0]
for i in range(1,len(a)):
    if a[i] > max:
        max = a[i]
print(max) 
