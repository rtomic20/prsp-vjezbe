#include <iostream>
using namespace std;
int main()
{
    long int w;
    long int result;
    cin>>w;
    if(w==1){
            cout<<"NO"<<endl;
        }
    for(long int i=1;i<w;i++){
        if(w==2){
            cout<<"NO"<<endl;
            break;
        }
        if(i%2==0){
            result=w%i;
            if(result%2==0){
                cout<<"YES"<<endl;
                break;
            }
            else{
                cout<<"NO"<<endl;
                break;
            }
        }
    }
} 
