
#include<bits/stdc++.h>
using namespace std;
void numberOfDigit(int n){
     int digit=0;
    while(n>0){
        n=n/10;
        digit++;
    }
    cout<<"number of digits in number are"<<digit<<endl;
}
void reverseNumber(int n){
    int rev=0;
    int dig=0;
    int temp=n;
    while(n>0){
        dig=n%10;
        rev=rev*10+dig;
        n/=10;
    }
    cout<<"revers of "<<temp<<"->"<<rev<<endl;
}

void palindromeNumber(int n){
    int rev=0;
    int dig=0;
    int temp=n;
    while(n>0){
        dig=n%10;
        rev=rev*10+dig;
        n/=10;
    }
    if(rev==temp){
        cout<<"palindrome"<<"\n";
    }else{
        cout<<"NOT Pali"<<endl;
    }

}
void armstrongNumber(int n){
    int dig=0;
    int rev=0;
    int temp=n;
    while(n>0){
        dig=n%10;
        rev=rev+dig*dig*dig;
        n/=10;
    }
     if(rev==temp){
        cout<<"Armstrong"<<"\n";
    }else{
        cout<<"NOT armstrong "<<endl;
    }
}
void printAllDivisor(int n){
       for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            cout << i << " ";
        }
    }

}

void printAllDivisorOpti(int n){
      for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            cout << i << " ";
        
        if((n/i)!=i){
            cout<<(n/i)<<" ";
        }

        }
    }
}
void primeNumber(int n){
 int cnt=0;
    for(int i=1;i*i<=n;i++){
       
        if(n%i==0){
            cnt++;
            if((n/i)!=i)
                cnt++;
            
        }
    }
        if(cnt==2){
            cout<<"it's prime";
            
        }else{
            cout<<"Not prime";
        }
    
}
void  gcd(int a, int b) {
    int gcd = 1;
    for (int i = 1; i <= min(a, b); i++) {
        if (a % i == 0 && b % i == 0) {
            gcd = i;
        }
    }
    cout<< gcd;
}
void  gcd2(int a, int b) {
    while (b > 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    cout<< a;
}
void power(double x, int n) {
    double ans = 1;
    while (n > 0) {
        if (n % 2 == 1) {
            ans *= x;
        }
        x *= x;
        n /= 2;
    }
    cout<<ans;
}
void printPrimesseive(int n) {
    vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false;
    
    for (int i = 2; i * i <= n; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }
    
    for (int i = 2; i <= n; i++) {
        if (isPrime[i]) {
            cout << i << " ";
        }
    }
}

int main(){
    int n;
    cin>>n;
//    numberOfDigit(n);
// reverseNumber(n);
// palindromeNumber(n);
// armstrongNumber(n);
// printAllDivisor(n);
// printAllDivisorOpti(n);
// primeNumber(n);
// gcd(n);
// gcd2(n);
// power(n);
printPrimesseive(n);
}