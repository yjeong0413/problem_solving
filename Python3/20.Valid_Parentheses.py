class Solution:
    def isValid(self, s: str) -> bool:
        '''
        Demonstrate stack implementation using LIST.
            -> st = []
        Functions:
            append() -> st.append('(')
            pop() -> st.pop(): LIFO, st.pop(3): delete fourth value
            len() -> len(st): size of the list 
        '''
        
        sLength = len(s)
        st = []
        flag = True
        
        if sLength < 2 or s[0] == ')' or s[0] == ']' or s[0] == '}' :
            flag = False
        else :
            for i in s:
                if i == '(': st.append(i)
                elif i == '{': st.append(i)
                elif i == '[': st.append(i)
                elif i == ')': 
                    if len(st) != 0 and st[-1] == '(': st.pop()
                    else: flag = False
                elif i == '}': 
                    if len(st) != 0 and st[-1] == '{': st.pop()
                    else: flag = False
                elif i == ']': 
                    if len(st) != 0 and st[-1] == '[': st.pop()
                    else: flag = False


        if len(st) != 0: flag = False
            
        
        return flag 
