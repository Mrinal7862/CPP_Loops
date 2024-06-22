#include <iostream>

using namespace std;

int main(){
    // int n,m;
    // cin>>n;
    // cin>>m;

    // for(int i = 1; i<=n;i++){
    //     for(int j=1; j<=m; j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    //2

    // int n,m;
    // cin>>n>>m;

    // for(int i=1; i<=n; i++){

    //     for(int j=1; j<=m;j++){

    //         if(i==1 || j== 1 || i == n || j == m){

    //             cout<<"*";

    //         }

    //         else{

    //             cout<<" ";

    //         }
        
    //     }
    //     cout<<endl;
    // }

    //3

    // int n;

    // cin>>n;

    // for(int i=1; i<=n; i++){
    //     cout<<i;

    //     for(int j=1;j<=i;j++){
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }

    //4

    // int n;

    // cin>>n;

    // for(int i=1; i<=n;i++){
    //     for(int j=1; j<=n-i; j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    //5 - Triangle pattern 
    //  int n;

    //  cin>>n;

    //  for(int i=1; i<=n;i++){

    //     for(int j=1; j<=(n-i); j++){
    //         cout<<" ";

    //     }

    //     for(int j=1; j<=(2*i-1); j++){
    //         cout<<j;
    //     }

    //     cout<<endl;

    //  }

    //6
    int rows,columns;
    cin>>rows>>columns;

    for(int i=1 ;i<= rows;i++){
        for(int j=1; j<=columns;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}