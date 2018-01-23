
#第一题：判断是否是升序
def is_sorted(myList):
    if(len(myList)):  #判断是否为空
        if myList == sorted(myList):
            return True
        else:
            return False
    else:
        return False

li=[1,2,4,3]

print(is_sorted(li))
    
        
#第二题

def is_huiwen(l1,l2):   
    ishuiwen_1= -int(l1!=l1[::-1])
    ishuiwen_2= -int(l2!=l2[::-1])
    print(ishuiwen_1)
    print(ishuiwen_2)
    if ishuiwen_1 == 0:
        if ishuiwen_2 == 0:
            return True
        else:
            return False
    else:
        return False


l1="asdsa"
l2="dfgfd"

print(is_huiwen(l1,l2))
