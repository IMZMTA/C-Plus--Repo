#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the no of times for occurence : ";
    cin>>n;

//     for(int i=1;i<=n;i++){
//         // for(int j=1;j<=n+1-i;j++){
//         //     cout<<j<<" ";
//         // }
//         // for(int j=1;j<=(i-1)*2;j++){
//         //     cout<<"* ";
//         // }
//         // int k=n+1-i;
//         // for(int j=1;j<=n+1-i;j++){
//         //     cout<<k<<" ";
//         //     k-=1;
//         // }

//         for(int j=1;j<=n-i;j++){
//             cout<<"  ";
//         }
//         // int k=i;
//         // for(int j=1;j<=i;j++){
//         //     cout<<k<<" ";
//         //     k--;
//         // }
//         for(int j=i;j>=1;j--){
//             cout<<j<<" ";
//         }
//     cout<<endl;
//     }
// }

int k=n;

int r,s;
s=0;

cout<<n<<endl;

// while(n!=0){
//     r=n%10;
//     s=s*10+r;
//     n=n/10;
//     // cout << rn;543
// }
// cout << s;
// }

// 5678
for(;n!=0;n=n/10){
    r=n%10;
    s=s+r*r*r;
}
cout << s<<endl;
cout<<n;

if(k==s){
    cout<<"It is a palindrome number";
}
else{
    cout<<"Not a palindrome";
}
}

// palindrome number 121 1331 999
// n
// int k=n;

