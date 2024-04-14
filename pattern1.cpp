// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=i;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int num , a = 0 , b = 1 , Tn = 0 ;
//     cout << "Enter the number of terms you want to print" << endl ;
//     cin >> num ;

//     for (int i = 0; i < num; i++)
//     {
//         if (i == 0)
//         {
//             cout << a << " " ;
//             continue ;
//         }

//         if (i == 1)
//         {
//             cout << b << " " ;
//             continue ;
//         }
//         Tn = a + b ;
//         a = b ;
//         b = Tn ;

//         cout << Tn << " " ;
        
//     }
    

//     return 0;
// }


// Patterns 


#include<iostream>
using namespace std ;
int main(int argc, char const *argv[])
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*" << " " ;
        }
        cout << endl ;
    }
    
    return 0;
}