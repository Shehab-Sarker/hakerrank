x=int(input())
y=int(input())
z=int(input())
n=int(input())

main_list=[]
for i in range(x+1):
    for j in range(y+1):
        for k in range(z+1):
            if (i+j+k)!=n:
                main_list.append([i,j,k])
                
print(main_list)
            