if __name__=="__main__":
    a=list(map(int,input().split()))
    b=list(map(int,input().split()))
    
    for i in a:
        for j in b:
            print(f"({i}, {j})",end=" ")
    