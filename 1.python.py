#10公里等于a英里
a=10/1.61
print(a)
#b为每英里花费的时间
b=43.5/a
print(b)
#c为每小时所跑的英里数
c=60/b
print(c)


#-------------------------------

#计算华氏度
def calcu(x):
    d=x*1.8;
    d=d+32;
    return d;

print(calcu(39))

#-------------------------------
num1=17/2
print(num1)  #width/2的值  8.5   浮点型
num1=17/2.0
print(num1)  #width/2.0的值  8.5   浮点型
print(12.0/3)   #4.0 浮点型
print(1+2*5)   #11   整型
de = '.'
print(de*5) # .....  字符串？

#-------------------------------

#计算书本总价
def calculate(count):
    ysf=3+(count-1)*0.75;
    price=(24.95*0.4)*count+ysf;
    return price

print(calculate(60));




