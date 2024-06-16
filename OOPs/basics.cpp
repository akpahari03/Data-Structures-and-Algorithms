#include<bits/stdc++.h>
using namespace std;
class vehicle {
    private:
    int number;
    public:
    string model;
    int weight;

    //constructor ( no return type , )
    vehicle() {
        cout<<"Constructor Called"<<endl;
    }

    //parametized constructor
    vehicle(int number,string model) {
        // cout<<"this-> "<<this<<endl;
        this-> model = model;
        this-> number = number;
    }

    //copy constructor
    vehicle(vehicle& temp) {
        cout<<"Copy Constructor called"<<endl;
        this->model=temp.model;
        this->number=temp.number;
    }

    void print() {
        cout<<"Model is "<<this->model<<endl;
        cout<<"Number is "<<this->number<<endl;
    }

    //setter
    void setNumber(int n) {
        number=n;
    }

    //getter
    int getNumber() {   
        return number;
    }
    
    
};
int main()
{
    //static allocation
    vehicle v1(10,"Maruti");

    // cout<<"Address of v1 object "<<&v1<<endl; //for comparing of this pointer
    v1.print();

    v1.model="Swift";
    cout<<v1.model<<endl;

    v1.setNumber(2900);
    cout<<v1.getNumber()<<endl;
    cout<<"Size of v1 "<<sizeof(v1)<<endl;


    //dyanmic allocation
    vehicle *v2 = new vehicle(12,"BMW");

    // cout<<"Address of v2 object "<<&v2<<endl;
    cout<<v2->getNumber()<<endl;

    (*v2).model="Benz A";
    cout<<(*v2).model<<endl;

    (*v2).setNumber(2023);
    cout<<v2->getNumber()<<endl; //another syntax, arrow operator
    cout<<"Size of v2 "<<sizeof(*v2)<<endl;

    vehicle v3(v1); //copy constructor called
    v3.print();


    return 0;
}