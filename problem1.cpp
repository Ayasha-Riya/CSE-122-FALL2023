#include<iostream>
#include<string>


using namespace std;
int main(){

   int n;
   cin>>n;
   int x=0;
   for(int i=0;i<n;++i){
    string statement;
    cin>>statement;

    if(statement=="++x"||statement=="x++"){
        ++x;
    }
    else if(statement=="--x"||statement=="x--"){
        --x;
    }
   }

   cout<<x<<endl;
   return 0;


}
