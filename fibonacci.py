def fib(n):
    if n==0:
        return 0
    elif n==1:
        return 1 
    else:
        return fib(n-1)+fib(n-2)
n=int(input())
print("Fibonacci series upto given no of times is:")
for n in range(0,n):
    print(fib(n),end=" ")
    
    
    
    
# without recursion
n = int(input("Enter the value of 'n': "))
a = 0
b = 1
sum = 0
count = 1
print("Fibonacci Series: ", end = " ")
while(count <= n):
  print(sum, end = " ")
  count += 1
  a = b
  b = sum
  sum = a + b
