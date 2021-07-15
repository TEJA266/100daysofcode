n=int(input())
b=n 
sum=0
while(n>0):
    a=n%10
    sum=sum*10+a
    n=n//10 

if(b==sum):
    print("palindrome")
else:
    print("not")
