def swap(tup,index1,index2):
    lst = list(tup)
    lst[index1],lst[index2] = lst[index1],lst[index2]
    return tuple(lst)

tup = (10,20,30,40,50)
index1 = 1
index2 = 3
print(swap(tup,index1,index2))