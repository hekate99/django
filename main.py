
##second approach
# instead of counting number of zero, if the current element is 0, we can place 0 at next available position in the array
# after all the elements are processed then fill the remaining places by 1

def sort(A):
    k=0  #k stores index of next available position
    
    #do this work with each element
    for i in range(len(A)):
        #if current element is 0 ,then put 0 at next free space position in the array
        if A[i]==0:
            A[k]=0 
            k=k+1

        #fill all the remaining places with 1
        for i in range(k,len(A)):
            A[k]=1 
            k=k+1
if __name__ == '__main__':
    A=[1,1,1,1,0,0,0,0,0]
    #call the function 
    sort(A)

    print(A)    



