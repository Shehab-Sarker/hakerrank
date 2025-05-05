if __name__=="__main__":
    n=int(input())
    students_marks={}
    for _ in range(n):
        name, *line=input().split()
        scores=list(map(float,line))
        students_marks[name]=scores
        
    query_name=input()
    # marks=students_marks[query_name]
    # sum=0
    # for i in marks:
    #     sum+=i
    avg=sum(students_marks[query_name])
        
    print(f"{avg/3:.2f}")