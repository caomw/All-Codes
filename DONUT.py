from sys import stdin
from collections import deque
 
def main():
    nextint = iter(map(int, stdin.read().split())).next
    for _ in xrange(nextint()):
        n, m = nextint(), nextint()
        arr = deque(sorted([nextint() for _ in xrange(m)]))
        cuts = 0
        while len(arr) >= 3:
            left = arr.popleft()
            if len(arr) <= left:
                arr.appendleft(left)
                break
            arr.append(sum([arr.pop() for _ in xrange(left + 1)]) + left)
            cuts += left
        if sum(arr) == n
        print cuts + len(arr) - 1
 
main()