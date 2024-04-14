#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        char ch='A'+i-1;
        for(int j=1;j<=n;j++){
            cout<<ch<<" ";
        }
    cout<<endl;
    }
    cout<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            char ch='A'+j-1;
            cout<<ch<<" ";
        }
    cout<<endl;
    }
    cout<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            char ch='A'+j-1;
            cout<<ch<<" ";
        }
    cout<<endl;
    }
    cout<<endl;
    int c=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            char ch='A'+c;
            cout<<ch<<" ";
            c+=1;
        }
    cout<<endl;
    }
    cout<<endl;
    int x=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            char ch='A'+j+x-1;
            cout<<ch<<" ";
        }
        x+=1;
    cout<<endl;
    }
    cout<<endl;
    int y=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            char ch='A'+j+y-1;
            cout<<ch<<" ";
        }
        y+=1;
    cout<<endl;
    }
    cout<<endl;
    int z=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n+1-i;j++){
            char ch='A'+j+z-1;
            cout<<ch<<" ";
        }
        z+=1;
    cout<<endl;
    }
    cout<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n+1-i;j++){
            char ch='A'+j-1;
            cout<<ch<<" ";
        }
        for(int j=1;j<=(i-1)*2;j++){
            cout<<"* ";
        }
        for(int j=1;j<=n+1-i;j++){
            char ch='A'+n+j-2;
            cout<<ch<<" ";
        }
    cout<<endl;
    }
}