from itertools import combinations
str1=input()
str2=list(input())
c=0
for i in combinations(str1,len(str2)):
    if(list(i)==str2):
        c+=1 
print(c)
