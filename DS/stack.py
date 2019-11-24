class Stack():
    def __init__(self):
        self.items=[]
    def isEmpty(self):
        return self.items==[]
    def push(self,item):
        self.items.append(item)
    def pop(self):
        return self.items.pop()
    def peek(self):
        return self.items[-1]
    def size(self):
        return len(self.items)


s=Stack()
s.isEmpty()
s.push(5)
s.push(56)
s.push('sdfg')
s.push(9)
print(s.peek())
print(s.pop())
print(s.peek())
print(s.size())


