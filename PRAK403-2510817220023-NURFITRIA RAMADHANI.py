a,b = map(int,input().split())

if a<b:
    for i in range(a,b+1,1):
        j=a+b-i
        print(i,j,end="")
        if i!=b:
            print(" - ",end="")
else:
    for i in range(a,b-1,-1):
        j=a+b-i
        print(i,j,end="")
        if i!=b:
            print(" - ",end="")