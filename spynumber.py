def sum_of_digits(n):
  s=0 #sum
  while n!=0 :
    rem=n%10 #extracting the last digit of n
    s=s+rem #calculating sum
    n=n//10 #updating n
  return s
def product_of_digits(n):
  p=1 #product
  while n!=0:
    rem=n%10 #extracting the last digit of n
    p=p*rem #calculating product
    n=n//10 #updating n
  return p
n=int(input("Enter a number:")) #n-number 
sum=sum_of_digits(n) #storing value of sum_of_digits() in sum
product=product_of_digits(n) #storing value of product_of_digits() in product
if(sum==product): #checking condition for spy number
  print("{} is a Spy Number".format(n))
else:
  print("{} is not a Spy Number".format(n))
