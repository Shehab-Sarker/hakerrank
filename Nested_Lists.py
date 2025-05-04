N=int(input())
my_list=[]
for _ in range(N):
    name=input()
    grade=float(input())
    my_list.append([name,grade])
    
# for i in range(N):
#     for j in range(2):

# sorted_my_list= sorted(my_list, key=lambda x: x[1])
grades=sorted(set(x[1] for x in my_list))
second_lowest=grades[1]

names=[x[0] for x in my_list if x[1]==second_lowest]

for name in sorted(names):
    print(name)
        