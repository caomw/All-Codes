#include <bits/stdc++.h>
using namespace std;
typedef long int ll;


 ll makeEqual(string &str1,string &str2)
 {
 	ll len1 = str1.size();
 	ll len2 = str2.size();

 	if (len1<len2)
 	{
 		for(ll i=0;i<len2-len1;i++)
 			str1+='0';
 		return len2;
 	}
 	else if(len1>len2)
		for(ll i=0;i<len1-len2;i++)
			str2+='0';

	return len1;
 }

 string addBitStrings(string first,string second)
 {
 	string result;

 	ll length = makeEqual(first,second);
 	ll carry =0 ;

 	for(ll i=length-1;i>=0;i--)
 	{
 		ll firstBit = first.at(i) - '0';
 		ll secondBit = second.at(i) - '0';

 		ll sum = (firstBit^secondBit^carry)+'0';

 		result+=(char)sum;

 		carry = (firstBit&secondBit) | (secondBit&carry) | (firstBit&carry);
 	}
	
	if (carry)
		result+='1';

	return result; 	
 }

 ll multiplySingleBit(string a,string b)
 	{return (a[0]-'0')*(b[0]-'0');}

ll multiply(string X,string Y)
{
	ll n = makeEqual(X,Y);

	if (n==1) return multiplySingleBit(X,Y);
	if (n==0) return 0;

	ll fh = n/2;
	ll sh = n-fh;

	string Xl = X.substr(0,fh);
	string Xr = X.substr(fh,sh);

	string Yl = Y.substr(0,fh);
	string Yr = Y.substr(fh,sh);

	ll P1 = multiply(Xl,Yl);
	ll P2 = multiply(Xr,Yr);
	ll P3 = multiply(addBitStrings(Xl,Xr),addBitStrings(Yl,Yr));

	return (1<<(2*sh))*P1 +(P3-P1-P2)*(1<<sh) + P2;
}

main()
{

    printf ("%ld\n", multiply("1100", "1010"));
    printf ("%ld\n", multiply("110", "1010"));
    printf ("%ld\n", multiply("11", "1010"));
    printf ("%ld\n", multiply("1", "1010"));
    printf ("%ld\n", multiply("0", "1010"));
    printf ("%ld\n", multiply("111", "111"));
    printf ("%ld\n", multiply("11", "11"));
}