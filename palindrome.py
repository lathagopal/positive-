def main():
 p=int(input(""))
 temp=p
 rev=0
 while(p>0):
    dig=p%10
    rev=rev*10+dig
    p=p//10
 if(temp==rev):
    print("Yes")
 else:
    print("No")

if __name__ == '__main__':
    main()
