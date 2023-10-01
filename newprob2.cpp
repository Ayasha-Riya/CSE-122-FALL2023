# include<iostream>
#include<string>
using namespace std;
int main(){
    string input;
    cin>>input;
    string result="";
    for(char c:input){
        char lower_c=
        tolower(c);
        if(lower_c!='y'&& lower_c!='a'&& lower_c!='e'&& lower_c!='i'&& lower_c!='o'&& lower_c!='u'){

            result+='.';
            result+=lower_c;
        }

    }

return 0;
}

