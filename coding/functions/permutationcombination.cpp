// #include<iostream>
// using namespace std;
// int main(){
//     int n,r;
//     cout<<"Enter n";
//     cin>>n;
//     cout<<"Enter r";
//     cin>>r;
//     int nfactor=1,rfactor=1,nrfactor=1;
//    for(int i=1;i<=n;i++){
//     nfactor=nfactor*i;
//    }
//    for(int i=1;i<=r;i++){
//     rfactor=rfactor*i;
//    }
//    for(int i=1;i<=n-r;i++){
//     nrfactor=nrfactor*i;
//    }
//    int ncr=nfactor/(rfactor*nrfactor);
//    cout<<"ncr"<<ncr;
// }


// #include<iostream>
// using namespace std;
// int fact(int x){
//     int fact=1;
//     for(int i=1;i<=x;i++){
//     fact=fact*i;
//    }
//    return fact;

// }
// int main(){
//     int n,r;
//     cout<<"Enter n";
//     cin>>n;
//     cout<<"Enter r";
//     cin>>r;
//     int nfactor,rfactor,nrfactor;
//     nfactor=fact(n);
//    rfactor= fact(r);
//    nrfactor= fact(n-r);
//    int ncr=nfactor/(rfactor*nrfactor);
//    cout<<"ncr"<<ncr;
// }

#include<iostream>
using namespace std;
int fact(int x){
    int fact=1;
    for(int i=1;i<=x;i++){
    fact=fact*i;
   }
   return fact;

}
int combination(int n,int r){
    int ncr=fact(n)/(fact(r)*fact(n-r));
    return ncr;
}
int main(){
    int n,r;
    cout<<"Enter n";
    cin>>n;
    cout<<"Enter r";
    cin>>r;
    int nfactor,rfactor,nrfactor;
    nfactor=fact(n);
   rfactor= fact(r);
   nrfactor= fact(n-r);

   cout<<"ncr"<<combination(n,r);
}