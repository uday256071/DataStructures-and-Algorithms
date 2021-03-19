class node():
    def __init__(self,ele):
        self.value=ele
        self.next=None

class linkedList():
    def __init__(self):
        self.head=None
        self.tail=None
    def appendEnd(self,ele):
        if self.tail==None:
            self.head=self.tail=node(ele)
        else:
            self.tail.next=node(ele)
            self.tail=self.tail.next

    def appendStart(self,ele):
        if self.head==None:
            self.head=node(ele)
        else:
            ptr=node(ele)
            ptr.next=self.head
            self.head=ptr

    def reverse(self):
        self.tail=self.head
        currNode=self.head
        prevNode=None
        nextNode=None

        while currNode:
            nextNode=currNode.next
            currNode.next=prevNode
            prevNode=currNode
            currNode=nextNode
        self.head=prevNode


    def printll(self):
        currNode=self.head
        while currNode !=None:
            print(currNode.value,end=" ")
            currNode=currNode.next
        print("")



ll=linkedList()
for i in range(5):
    ll.appendEnd(i)
ll.appendStart(99)
ll.printll()
ll.reverse()
ll.printll()