def fib(n):
    if n==0 or n==1:
        return 1 
    else:
        return fib(n-1)+fib(n-2)
n=int(input())
print("Fibonacci series upto given no of times is:")
for n in range(0,n):
    print(fib(n),end=" ")
