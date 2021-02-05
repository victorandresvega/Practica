#include <iostream>
#include <string>
using namespace std;

bool isLower(int first, int second){
    if(first > second){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    cout<<"edit"<<endl;
    cout<<"new change";
    string input = "yes";
    cout<<input.find('e');
    return 0;

    
}
