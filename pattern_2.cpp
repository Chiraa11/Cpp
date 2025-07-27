#include<iostream>
using namespace std;
int main() {
    int a,b;
    cout<<"Enter a number:\n";
    cin>>a;
    
    //for(int i = 0;i<a; i++) {
       // for(int j= 0; j<i+1; j++ ) {
          //  cout<<"*";
       // }
        //cout<<endl;
  //  }

  //char ch;
//cout<<"Enter the first character: ";
//cin>>ch;
    //for(int k= 0; k<a; k++) {
        
        //for(int l = 0; l<k+1; l++) {
            
            //cout<<ch<<" ";
            

        //}
        //cout<<endl;
        //ch+=1;
    //}
//cout<<"First number: ";
//cin>>b;
    for(int z= 0; z<a; z++) {

        for(int v = z+1; v>0; v--) {
            cout<<v<<" ";
            
            
        }
        cout<<endl;
        

    }
    return 0;
}
