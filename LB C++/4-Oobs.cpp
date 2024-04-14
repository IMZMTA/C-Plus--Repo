#include<iostream>
using namespace std;

class Animal{
    protected:
    int height;
    int weight;

    // void print(){
    //     cout<<this->height;
    //     cout<<this->weight;
    // }
};

class Dog:public Animal{
    char color;
    string type;

    void setheight(int h){
        
    }
};

int main(){
    Dog d;
    d.height=5;
    d.weight=10;
}

