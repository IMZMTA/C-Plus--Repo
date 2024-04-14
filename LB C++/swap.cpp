// // #include <iostream>
// // using namespace std;

// // int main() {
// //     int a = 10, b = 30, c = 30;
// //     if (a <= b && !b) {
// //         cout << "hello";
// //     } else if (c >= a && c >= b) {
// //         cout << "hi";
// //     } else {
// //         cout << "hey";
// //     }
// // }

// #include <iostream>

// using namespace std;

// // int main() {
// //  int input = 2;
// //  switch (input) {
// //    case 1:
// //        cout << "One ";
// //    case 2:
//         cout << "Two ";
//     case 3:
//         cout << "Three ";
//     default:
//         cout << "Default ";
//         break;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int i;
//     for (i = 0; i < 10; i++)
//         ;

//     {
//         cout << i;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// void demo(int a, int b = 7)
// {                          // declare
//     cout << a << " " << b; // define
// }

// int main()
// {
//     int a = 5;
//     int b = 15;
//     demo(a); // call
// }

// #include <iostream>
// #include <string>
// using namespace std;

// int func(int &a)
// { // pass by value a =>copy; pass by reference gives the address
//     a += 10;
//     return a;
// }

// int main()
// {
//     // int a = 5;
//     // func(a);
//     // cout << a;

//     // string b;
//     // getline(cin,b);
//     // // cin>>b;

//     // cout<<b;

//     int a = 8;
//     int b = a << 2;
//     cout << b;
// }

// #include <iostream>
// using namespace std;

// int main()
// {

//     char a;
//     cin >> a;
//     // int s = int(a);
//     // if(s>=65&&s<=96){
//     if (a >= 'A' && a <= 'Z')
//     {
//         cout << 1 << endl;
//     }
//     // else if(s>=97&&s<=122){
//     else if (a >= 'a' && a <= 'z')
//     {
//         cout << 0;
//     }
//     else
//     {
//         cout << -1;
//     }

//     return 0;
// }
