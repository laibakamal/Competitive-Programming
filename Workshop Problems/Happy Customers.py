def happyCustomers():
    N=int(input("Enter number of customers:"))
    D=int(input("Enter total stock available:"))
    sizeOfA=int(input("Enter size of package A:"))
    sizeOfB=int(input("Enter size of package B:"))
    
    #the following list stores number of 
    #dates each customer requires
    list1=[]
    for i in range(0,N):
        A=int(input())#number of packages of A customer requires
        B=int(input())#number of packages of B customer requires
        datesReq = (A*sizeOfA) + (B*sizeOfB)#number of dates this customer requires
        list1.append(datesReq)
    print(list1)
    
    # the following dictionary will store the indices
    #as keys and values (number of dates) happy customers require
    indices_dictionary = {}
    for i in range(0,N):    
        if(D>0 and list1[i]<=D):#if we have dates still available AND we can fulfil the need of customer with that
            indices_dictionary[i+1] = list1[i]#append it to the dictionary
    print(indices_dictionary)
    
    #sort the dictionary by values
    sorted_indices=dict(sorted(indices_dictionary.items(), key=lambda item: item[1]))
    
    #print keys
    for keys, value in sorted_indices.items():
       print(keys)