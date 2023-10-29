#ifdef MYMATHS_H
#define MYMATHS_H
long long gcd(long long a,long long b);
long long lcm(long long a,long long b);
bool isprime(long long n);
bool issq(long long n);
short numlen(long long n);
#endif
#include<cmath>
long long gcd(long long a,long long b){
	//O(1)
	if(a%b==0){
		return b;
	}
	return gcd(b,a%b);
}
long long lcm(long long a,long long b){
	//O(1)
	return a*b/gcd(a,b);
}
bool issq(long long n){//Determine the perfect square number
	//O(log(sqrt(n)))
	long long l=0,r=n;
	while(r-l>1){
		long long mid=(l+r)/2;
		if(mid*mid<=n)
			l=mid;
		else
			r=mid;
	}
	if(l*l==n)
		return 1;
	else
		return 0;
}

bool isprime(long long n){//Judging prime numbers
	long long m=sqrt(n);
	if(n==1){
		return 0;
	}
	for(long long i=2;i<=m;i++){
		if(n%i==0)
			return 0;
	}
	return 1;
}
short numlen(long long n){//Number of digits 
	short nlen=0;
	while(n!=0){
		nlen++;
		n=n/10;
	}
	return nlen;
}
//#endif
