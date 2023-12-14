a = input("Enter a string: ")
count = 0
list = a.split(",")
len = len(list)
for i in range(len):
    words = list[i].split()
    for word in words:
        if word == "not":
            count+=1
print(len-1)
print(count)