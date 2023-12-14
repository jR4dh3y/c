str1 ="axc"
str2 ="axdbghc"
initial = 0
initial2 = 0
checkstr = ""
for i in range(initial,len(str1)+1):
    for j in range(initial2,len(str2)+1):
        if str1[i] == str2[j]:
            checkstr+=str1[i]
            initial += 1
        else:
            initial2 += 1
if checkstr == str1:
    print("True")
else:
    print("False")

print(checkstr)

            
            