from sys import stdin
nex = iter(map(int,stdin.read().split())).next

mod = 1000000007

def findPow(base,exp):
    ans=1;
    base%=mod;
    while exp>0:
        if(exp%2):
            ans=(ans*base)%mod;
    
        exp/=2;
        base=(base*base)%mod;
    return ans;

t = nex()

for _ in xrange(t):
    
    n = nex()
    if(n==1):
        print "1"
        continue

    ans = ((13*findPow(3,n-2)) - 1);

    ans *=500000004;
    print (ans-findPow(2,n-1)+mod)%mod;        

