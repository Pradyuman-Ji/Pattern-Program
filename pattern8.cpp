#include<iostream>
using namespace std;
int main()
{
    int i,j;
    for(i=1;i<=4;i++){
        int k=1;
        for(j=1;j<=7;j++){
            if(j>=5-i&&j<=3+i){
               cout<<k;
               if(j<4){
                k++;
               }
               else{
                k--;
               }
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}