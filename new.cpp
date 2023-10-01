#include<iostream>
class vehicle{
public:
    int wheels;
    int range;
    vehicle(int w,int r):wheels(w),range(r){}
    void display() const{
    std::cout<<"wheels:"<<wheels<<"\nrange:"<<range<<std::endl;
    }

};
class car :public vehicle{
public: int passanger;
car(int w,int r,int p):vehicle(w,r),passanger(p){}
void display() const{
vehicle::display();
std::cout<<"passangers:"<<passanger<<std::endl;
}

};
class truck :public vehicle{
public: int load;
truck(int w,int r,int l):vehicle(w,r),load(l){}
void display() const{
vehicle::display();
std::cout<<"load limit:"<<load<<std::endl;
}

};
int main(){
car c(4,500,5);
truck t(12,1200,3000);
std::cout<<"car:\n";
c.display();
std::cout<<"truck:\n";
t.display();
return 0;
}
