if __name__=="__main__":
    n=int(input())
    list_str=[]
    
    for _ in range(n):
        str=input().strip().split()
        if str[0]=="insert":
            list_str.insert(int(str[1]),int(str[2]))
        elif str[0]=="print":
            print(list_str)
        elif str[0]=="remove":
            list_str.remove(int(str[1]))
        elif str[0]=="append":
            list_str.append(int(str[1]))
        elif str[0]=="sort":
            list_str.sort()
        elif str[0]=="pop":
            list_str.pop()
        elif str[0]=="reverse":
            list_str.reverse()
    