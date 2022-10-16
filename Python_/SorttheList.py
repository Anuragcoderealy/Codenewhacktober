# user defined sort methods
def sort_integers(nums1):
    n = len(nums1)

    # Traverse through all nums1 elements
    for i in range(n-1): 
        for j in range(0, n-i-1):
            if nums1[j] > nums1[j + 1] :
                nums1[j], nums1[j + 1] = nums1[j + 1], nums1[j]

    return nums1

# user defined reverse methods
def reverse_integers(nums1):
    n = len(nums1)
    # store half length of array
    x = n//2
    temp = 0 

    # Run the loop till half of length of array 
    for i in range(x):
        temp = nums1[i]
        nums1[i] = nums1[n-i-1]
        nums1[n-i-1] = temp

    return nums1



nums1 = [12, 67, 7, 5, 45, 19, 13, 15, 23, 3]
# Sort the array
nums1 = sort_integers(nums1)
# Reverse the array
nums1 = reverse_integers(nums1)
# Display the array elements
for i in nums1:
    print(i,end=" ")

