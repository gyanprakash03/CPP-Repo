#include<iostream>
using namespace std;
#include <climits>

// int main()
// {
//     int row,i,j;
//     cin >> row;
//     for(i=1;i<=row;i++)
//     {
//         for(j=1;j<=row-i;j++)
//         {
//             cout << " ";
//         }

//         for(j=i;j>=1;j--)
//         {
//             cout << j;
//         }

//         for(j=2;j<=i;j++)
//         {
//             cout << j;
//         }
//         cout << endl;;
//     }
// }


// int main(){
//     int n,i,j;
//     cin >> n;
//     int count=0;
//     for (i=1;i<=n;i++) {
//         for (j=1;j<=n-(i-1);j++) {
//             cout << j;
//         }
//         for (j=1;j<=count;j++) {
//             cout << "*";
//         }
//         for (j=n-(i-1);j>=1;j--) {
//             cout << j;
//         }
//         count += 2;
//         cout << endl;
//     }
// }


// int main(){
//     int n;
//     cin>>n;
//     int max=INT_MIN,secondMax=INT_MIN;
//     int num;
//     int count=1;
    
//     while(count<=n){
//         cin>>num;
//         if (num>max){
//             secondMax=max;
//             max=num;
//         }
//         else if(num>secondMax&&num!=max){
//             secondMax=num;
//         }
//         count++;
        
        
//     }
//     cout<<secondMax<<endl;
    
// }