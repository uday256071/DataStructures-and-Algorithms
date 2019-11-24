class Queue():
    def __init__(self):
        self.items=[]
    def isEmpty(self):
        return (self.items==[])
    def add(self,item):
        self.items.append(item)
    def remove(self):
        return self.items.pop(0)
    def size(self):
        return len(self.items)

if __name__=="__main__":
    s=Queue()
    print(s.isEmpty())
    s.add(5)
    s.add(56)
    s.add("dfghj")
    print(s.remove())
    print(s.size())