#include<iostream>
using namespace std;
class Car;
class Boat;
class Boat{
    private:
    	int weight;
    public:
    	Boat(int w):weight(w){}
        friend int totalWeight(Boat &,Car &);
};
class Car{
    private:
    	int weight;
    public:
    	Car(int w):weight(w){}
        friend int totalWeight(Boat &,Car &);
};
int totalWeight(Boat &b,Car &c){
    int sum;
    sum=b.weight+c.weight;
    return sum;
}
int main(){
    Boat b(1);
    Car c(2);
    int sum=totalWeight(b,c);
    cout<<sum<<endl;
}
