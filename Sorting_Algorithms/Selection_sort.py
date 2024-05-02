def findMin(array):
   min = array[0]
   for i in range(len(array)):
      if min>array[i]:
        min = array[i]
   return min

#Selection Sort
def selectSort(array):
   new_array = []
   for i in range(len(array)):
      min = findMin(array)
      new_array.append(min)
      array.remove(min)
   return new_array

array = [20,2,0,99,-200,41,34,78,3]
sorted_array = selectSort(array)
print(sorted_array)