n=int(input('Enter a number: '))
m=int(input('Enter a number: '))
l=int(input('Enter a number: '))

if n>m and n>l:
    print(n,'is the greatest')
elif m>n and m>l:
    print(m,'is the greatest')
elif  l>n and l>m:
    print(l,'is the greatest')
else:
    print('***')
