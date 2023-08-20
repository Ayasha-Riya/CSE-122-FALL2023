#include<iostream>
using namespace std;

   class watermelon {

public:
       int weight;
    watermelon(int w):weight(w){}
    bool candivide() {
    return weight>=4 && weight%2==0;
    }
   };
 int main(){
 int w;
 cin>>w;
   watermelon melon(w);
   cout<<(melon.candivide()?"YES":"NO")<<endl;
   return 0;
 }
