/*
* @turlapatykaushik
* github url : github.com/turlapatykaushik
*/

def remove_duplicate(yourlist):
  new_list = []
  recent_element_added = None
  for x in yourlist:
    if x != recent_element_added:
      new_list.append(x)
      recent_element_added = x
  return new_list
  
print remove_duplicate([1,2,3,4,4,5,6,6,7,7])
