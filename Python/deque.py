class Deque():
    def __init__(self):
        self.items=[]
    def isEmpty(self):
        return self.items == []
    def addLeft(self,item):
        return self.items.insert(0,item)
    def add(self,item):
        return self.items.append(item)
    def removeLeft(self):
        return self.items.pop(0)
    def remove(self):
        return self.items.pop()
    def size(self):
        return len(self.items)

if __name__=="__main__":    
    s=Deque()
    s.addLeft(5)
    s.addLeft(9)
    s.add("ffgh")
    s.add("fghj")
    s.remove()
    s.removeLeft()
    print(s.size(),s.items)
