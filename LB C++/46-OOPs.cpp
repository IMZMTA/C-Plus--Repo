#include<iostream>
#include<cstring>
using namespace std;

class Hero {

    //properties
    private:
    int health;

    public:
    char *name;
    char level;

    //Automatic default construction is created where construtorn is one with no return type and invoke when object is created.
    Hero(){
        cout<<"Constructor is called";
        name=new char[100];
    }

    //Parameterized Contructor
    Hero(int health){
        cout<<"this ->"<<this<<endl;
        this->health=health;// this is a keyword which is used to store the location of current object.
    }

    //Deafult Copy Constructor=>Shallow Copy Approach
    //Copy Constructor=>Deep copy constructor.
    Hero(Hero& temp){

        char *ch=new char[strlen(temp.name),+1];
        strcpy(ch,temp.name);
        this->name=ch;

        cout<<"Copy Construtor is called  "<<endl;
        this->level=temp.level;
        this->health=temp.health;
    }


    void print(){
        cout<<endl<<endl;
        cout<<"[ Name : "<<this->name<<" , ";
        cout<<"Health : "<<this->health<<" , ";
        cout<<"Level : "<<this->level<<" ]"<<endl<<endl;
    }

    //getter
    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }

    //setter
    void setHealth(int h){
        health=h;
    }
    void setLevel(char ch){
        level=ch;
    }
    void setName(char name[]){
        strcpy(this->name, name);
    }

};


int main()
{

    // setbuf(stdout, NULL);

    // Hero h1;
    // h1.setHealth(12);
    // h1.setLevel('B');
    // char name[7]="Mango";
    // h1.setName(name);

    // h1.print();

    // Hero h2(h1);    // Hero h2=h1;
    // h2.print();

    // h1.name[0]='T';
    // h1.print();

    // h2.print();

    // cout<<endl;


    // //Creation of Object
    // cout<<" Hi "<<endl;
    // Hero Srk(10); //creation by static allocation
    // cout<<"Address of Srk :"<<&Srk<<endl;
    // cout<<" Hello "<<endl;
    // Srk.print();

    // cout<<" Hi "<<endl;
    // Hero *Sk= new Hero;   
    // cout<<" Hello "<<endl;

    // //COPY cONSTRUCTOR IS CALLED BACK
    // //=>copy constructor->shallow copy
    // Hero Ad(12);
    // Hero Ak(Srk);
    // Ak.print();


    // //used getter to get private values (dot operator) =>  fetch data
    // cout<<"Srk health is "<<Srk.getHealth()<<endl;
    // cout<<"Sk Health is :"<<(*Sk).getHealth()<<endl;

    // //used setter to set values to private properties => set and condition can be attach
    // Srk.setHealth(7);
    // (*Sk).setHealth(9);

    // //set value 

    // // Srk.health=70;
    // Srk.level='A';
    // (*Sk).level='B';

    // // cout<<"Size : "<< sizeof(Srk) <<endl; 
    // cout<<"Health is :"<<Srk.getHealth()<<endl;
    // cout<<"Level is :"<<Srk.level<<endl;

    // cout<<"Sk Health is :"<<(*Sk).getHealth()<<"-"<<Sk->getHealth()<<endl;
    // cout<<"Sk Level is :"<<(*Sk).level<<"-"<<Sk->level<<endl;

    Hero h1;
    h1.setHealth(30);
    int s=h1.getHealth();
    h1.level;
    cout<<endl<<h1.getHealth()<<endl<<s;

    return 0;
}