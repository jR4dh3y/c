str1 ="cx"
str2 ="axdbghc"
initial = 0
initial2 = 0
checkstr = ""
while len(str1)>initial and len(str2)>initial2:
    if str1[initial] == str2[initial2]:
        checkstr+=str1[initial]
        initial += 1
    else:
        initial2 += 1
if checkstr == str1:
    print("True")
else:   
    print("False")
print(checkstr)
    
            