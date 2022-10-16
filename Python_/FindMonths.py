
# declare a dictonary of the months of the year and total number of days
myDict = {'January':31,'February':28,'March':31,'April':30,
           'May':31,'June':30,'July':31,'August':31,'September':30,
           'October':31,'November':30,'December':31
         }
         
         
# Months with less than 30 Days  
months_with_less_than_30_days = {item: value for(item,value) in myDict.items() if value<30}         
         
# Months with  31 Days           
months_with_31_days = {item: value for(item,value) in myDict.items() if value==31}         

# Months with 30 Days  
months_with_30_days = {item: value for(item,value) in myDict.items() if value==30}         


print(months_with_less_than_30_days)
print(months_with_31_days)
print(months_with_30_days)

