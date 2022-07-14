import numpy as np

def count_ways(size, array):
  # Any array of size less than 3 has zero ways
  if size < 3:
    return 0

  # An array with size = 3 has one way if all elements are equal otherwise zero ways
  elif size == 3:
    if array[0] == array[1] and array[1] == array[2]:
      return 1
    return 0
  
  # Arrays with size > 3
  else:
    # Total sum of the array has to be divisible by 3
    total_sum = sum(array)
    if total_sum % 3 != 0:
      return 0
    uq = np.unique(array)
    if len(uq) == 1 and uq[0] == [0]:
        return 28
        
    sub_sum = total_sum / 3
    sub_arr_count = 0
    i = 0

    # Loop over each element in the array
    while i < size:
      # Consider the current element as a sub-array itself and move to the next element
      if array[i] == sub_sum:
        sub_arr_count += 1
      
      # Sum the current element with its following elements and consume these elements unitl their current_sum >= sub_sum
      else:
        current_sum = array[i]
        while i < size-1 and current_sum != sub_sum:
          sub_arr_count = (sub_arr_count + 1) if array[i] == 0 else sub_arr_count
          current_sum += array[i+1]
          i+=1
        
        # This means that those continous elements can't sum up to the required sum
        # So they can't form a sub-array hence, zero ways
        if current_sum > sub_sum:
          return 0
        
        # Case where current_sum == sub_sum, so a sub-array can be constructed
        else:
          sub_arr_count += 1
      i += 1

  return sub_arr_count - 3 + 1 if sub_arr_count >= 3 else 0

if __name__ == "__main__":
    size = int(input())
    input_arr = input().split(" ")
    input_arr = [int(i) for i in input_arr]
    
    output = count_ways(size, input_arr)
    print(output)