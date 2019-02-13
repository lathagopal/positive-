def main():
   
 a= int(input("Enter a number: "))
 b = 0
 temp = a
 while temp > 0:
   digit = temp % 10
   b+= digit ** 3
   temp //= 10
 if a== b:
   print("Yes")
 else:
   print("No")

if __name__ == '__main__':
    main()
