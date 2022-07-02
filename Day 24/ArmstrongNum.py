n=int(input('Enter a number: '))
sum=0
temp=n

while temp>0:
    d=temp%10
    sum=sum+d**3
    temp=temp//10

if n==sum:
    print(n,'is an Armstrong number')
else:
    print(n,'is not an Armstrong number')
