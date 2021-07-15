n=int(input())
b=n 
sum=0
while(n>0):
    a=n%10
    sum=sum+a**3
    n=n//10 

if(b==sum):
    print("armstrong")
else:
    print("not")
    
