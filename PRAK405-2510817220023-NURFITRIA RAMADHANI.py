n,r=map(int,input().split())
i=1
hasil=0

while i<=n:
    baris=0
    j=1
    while j<=i:
        print(f"({j} * {r})",end="")
        baris+=j*r
        if j!=i:
            print(" + ",end="")
        j+=1
    print(f" = {baris}")
    hasil += baris
    i+=1
print(hasil)