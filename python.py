# -*- coding: utf-8 -*-
"""
"""


#  Program to print "hello world" #
print("hello world")

#  variables  #
x=5
print(x)

x,y,z="Apple","Banana","Mango"
print(x)
print(y)
print(z)

a=b=c="Orange"
print(a)
print(b)
print(c)




# string #
txt1="Hi Good Morning"
print(txt1)

x="Good" in txt1  #check the string#
print(x)

txt2=", had your tea"
txt3=txt1+txt2  #string concatenation#
print(txt3)

age=21
txt="my name is asha and my age is {}"
print(txt.format(age)) #concatination of integer and string by using format()#

# Arithmetic floor division operation #
x=5
y=2
print(x//y)




# list #
mylist=["apple","banana","mango","orange","cherry","kiwi","melon"] # creation of list#
print(mylist)
print(mylist[2]) #access the items from list#
print(mylist[-4:-1]) # range of negative index #
mylist[1]="pineapple" #change the item value#
print(mylist)

#loop throught the list#
for x in mylist:
    print(mylist)
print(len(mylist)) #length of list#

mylist.append("banana") #adding items to list#
print(mylist)

# remove item from list#
mylist.remove("banana")
print(mylist)

del mylist[2]
print(mylist)

#clear the list#
mylist.clear()
print(mylist)

#copy list#
thislist=["apple","orange","banana"]
list1=thislist.copy()
print(list1)
# or#
list2=list(thislist)
print(list2)

#reverse list#
list2.reverse()
print(list2)

#sort the list#
list2.sort()
print(list2)




# Tuple #
mytuple=("apple","banana","orange")
print(mytuple)
print(mytuple[2])  #access the item from tuple#
print(mytuple[-1]) #negative indexing#

#duplication of items#
mytuple=("apple","banana","orange","apple")
print(mytuple)

#change the tuple value#
mytuple1=list(mytuple)
mytuple1[1]="kiwi"
mytuple=tuple(mytuple1)
print(mytuple)




#set#
thisset={"apple","banana","cherry"} #create the set#
print(thisset)
thisset.add("mango") #add items to set#
print(thisset)
thisset.pop() #remove item from set#
print(thisset)
set2=thisset.copy() #copy the set to another set#
print(set2)

set3={1,2,3}
set1=set2.union(set3) #union of sets#
print(set1)








