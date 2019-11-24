# implement a queue (LIFO) using two stack(FIFO)

class queue():
    def __init__(self):
        self.instack=[]
        self.outstack=[]

    def enque(self,ele):
        self.instack.append(ele)
    
    def deque(self):
        if self.outstack==[]:
            while self.instack:
                self.outstack.append(self.instack.pop())
        return self.outstack.pop()

items=queue()
for i in range(5):
    items.enque(i)
    items.enque(15)
    print(items.instack)
    print(items.deque())
    print(items.outstack)

    


