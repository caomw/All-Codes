
def isSubsetSum(set,n,sum):
  if (sum == 0):
    return true;
  if (n == 0 && sum != 0):
    return false;
 
  if (set[n-1] > sum):
    return isSubsetSum(set, n-1, sum);
  return isSubsetSum(set, n-1, sum) or isSubsetSum(set, n-1, sum-set[n-1]);

t = int(raw_input())

for _ in xrange(t):
 