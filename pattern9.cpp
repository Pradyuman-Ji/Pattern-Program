#include<iostream>
using namespace std;
int main()
{
    int i,j;
    for(i=1;i<=4;i++){
        char ch='A';
        for(j=1;j<=7;j++){
            if(j<=5-i||j>=3+i){
                cout<<ch;
                if(j<4){
                    ch++;
                }
                else{
                    ch--;
                }
            }
            else{
                cout<<" ";
                if(j==4){
                    ch--;
                }
            }
        }
        cout<<endl;
    }
    return 0;
}