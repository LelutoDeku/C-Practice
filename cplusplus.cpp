#include <stdio.h>
#include <iostream>
 
 
 //max of three numbers
int main()
{
    using namespace std;
//     int a,b,c,n;
//     cin>>a>>b>>c;
//     a>b ? (a> c ? cout<<a : cout<<c) : (b>c ? cout<<b : cout<<c);  //complex ternary operator
    

//     return 0;


//prime numbers using bruteforce method

// cin>>n;
// for(int i=2; i<n;i++)   {
//     if(n%i==0)  {
//         cout<<"not prime";
//         break;
//     }
//     else    {
//         cout<<"prime";
//         break;
//     }
// }



//pattern questions
//1. Hollow rectangle
// int rows,columns;
//  cin>>rows>>columns;
//  for(int i=0;i<rows;i++)    {
//     for(int j=0;j<columns;j++)  {
//         if((i>0 && i<rows-1) && (j>0 && j<columns-1))
//         cout<<" ";
//         else
//         cout<<"*";

//     }
//     cout<<endl;
//  }

//2.Inverted half pyramid
// int rows;
// cin>>rows;
// for(int i=0;i<rows;i++) {
//     for(int j=0;j<rows-i;j++)   {
//         cout<<"*";
//     }
//     cout<<endl;
// }

//3.half pyramid after 180 deg rotation
// int rows;
// cin>>rows;
// for(int i=0; i<rows;i++)    {
//     for(int j=0;j<=rows;j++) {
//         if(j<(rows-i))
//             cout<<" ";
//         else
//             cout<<"*";
//     }

//     cout<<endl;

// }

//4. half pyramid number pattern
// int rows;
// cin>>rows;
// for(int i=0;i<rows;i++) {
//     for (int j=0;j<=i;j++)
//         cout<<i+1;
//     cout<<endl;
// }

//5.floyd's triangle
// int rows,count=1;
// cin>>rows;
// for(int i=0;i<rows;i++) {
//     for (int j=0;j<=i;j++)
//         cout<<count++<<" ";
//     cout<<endl;
// }

//6. butterfly pattern
// int rows,space=0;
// cin>>rows;

// for (int i = 0 ; i < rows ; i++)    {
    
//     for(int j = 0; j < i ; j++) 
//         cout<<"*";
    
//     space=2*rows-2*i;

//     for(int j=0;j<space;j++)
//         cout<<" ";

//     for(int j=0;j<i;j++)
//         cout<<"*";
    
//     cout<<endl;
        
//     }
//reverse printing above pattern
    
//     for (int i = rows ; i > 0 ; i--)    {
//          for(int j = 0; j < i ; j++) 
//             cout<<"*";
    
//         space=2*rows-2*i;

//         for(int j=0;j<space;j++)
//             cout<<" ";

//         for(int j=0;j<i;j++)
//             cout<<"*";
    
//     cout<<endl;
        
//     }

//advanced pattern problems
//1.inverted pattern
// int rows;
// cin>>rows;
// for(int i=rows;i>0;i--) {
//     for(int j=0;j<i;j++)
//         cout<<j+1;
//     cout<<endl;
// }

//2.0-1 pattern
// int rows;
// cin>>rows;
// for(int i=0;i<rows;i++) {
//     for (int j=0;j<i;j++)   {
//         if((i+j)%2==0)   even places are 1s and odd are 0s
//             cout<<"1";
//         else
//             cout<<"0";
//     }

//     cout<<endl;
// }


//3.rhombus pattern
// int rows, space = 0;
// cin>>rows;
// for(int i=0;i<rows;i++) {
//     space = rows - i;  just take spacing into account rest everything will fall in place
//     for(int j=0;j<space;j++)
//         cout<<" ";
    
//     for(int j=0;j<rows;j++)
//         cout<<"* ";
    
//     cout<<endl;
// }


//4.number pattern
// int rows,space =0;
// cin>>rows; this one not that difficult
// for(int i=0;i<rows;i++) {
//     space =rows-i;

//     for(int j=0;j<space;j++)
//         cout<<" ";

//     for(int j=0;j<i;j++)
//         cout<<j+1<<" ";

//     cout<<endl;
// }

//5.Palindromic Pattern
int rows,space =0;
cin>>rows;
for(int i=0;i<rows;i++) {
    space = rows - i;

    for(int j=0;j<space;j++)    
        cout<<" ";

    for (int j=0;j<=rows;j++)
        if(j<(rows-i))
            cout<<" ";
        else
            cout<<(rows-j)+1<<" ";

    for (int j=1;j<=i;j++)
        cout<<j+1<<" ";
    
    cout<<endl;
    
}



return 0;
}




