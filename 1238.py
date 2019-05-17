x = int(input())
for k in range(x):
    i=0
    j=0
    str = input().split()
    str1 = str[0]
    str2 = str[1]
    len1 = int(len(str1))
    len2 = int(len(str2))
    while(1):
        if(i<len1):
            print(str1[i], end="")
            i+=1
        if(j<len2):
            print(str2[j], end="")
            j+=1
        if(i==len1 and j==len2):
            break
    print("")
