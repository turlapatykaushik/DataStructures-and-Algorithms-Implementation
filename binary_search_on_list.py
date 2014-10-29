/*
* @turlapatykaushik
* github url : github.com/turlapatykaushik

* problem description : implementation of binary search on a list in python
*/

def binarysearch(youritem,yourlist):
  found = False
  bottom = 0
  top = len(yourlist)-1
  while bottom<=top and not found:
    middle = (top+bottom)/2
    if yourlist[middle]==youritem:
      found = True
    elif yourlist[middle] < youritem:
      bottom = middle + 1
    else:
      top = middle-1
  return found
yourlist=[2,3,6,7,8,34,65,76,86,95,97,99]
isitfound = binarysearch(736,yourlist)
if isitfound:
  print "yo man! found it"
else:
  print "no man! failed to find it"

    
