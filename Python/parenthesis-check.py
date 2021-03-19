# Check paranthesis balance
# ({})  -balanced
# ({)}  -unbalanced

def paranthesisCheck(arr)-> bool:
    n=len(arr)
    opening=['[{(']
    matches={('[',']'),('{','}'),('(',')')}
    stack=[]

    for i in arr:
        if i in opening:
            stack.append(i)
        else:
            if len(stack)==0:
                return "false"
            last_paren=stack.pop()

            if (last_paren,i) not in matches:
                return "false"
    if len(stack)!=0:
        return ("false")
    else:
        return "true"


str="[(])"
print(str,paranthesisCheck(list(str)))
str="[({})]"
print(str,paranthesisCheck(list(str)))
    
        




