///
#include <iostream>
#include <string>
using namespace std;
class Painting {
public:
    string title;
    string artist;
    int value = 400;
    Painting(string title, string artist) {
        this->title = title;
        this->artist = artist;
    }
    virtual void display() {
        cout << "Title: " << title << endl;
        cout << "Artist: " << artist << endl;
        cout << "Value: $" << value << endl;
    }
};
class FamousPainting : public Painting {
public:
    FamousPainting(string title, string artist) : Painting(title, artist) {
        value = 25000;
    }
};
int main() {
    Painting* paintings[5];
    for (int i = 0; i < 3; i++) {
        string title, artist;
        cout << "Enter the title of painting " << i + 1 << ": ";
        getline(cin, title);
        cout << "Enter the artist of painting " << i + 1 << ": ";
        getline(cin, artist);
        if (artist == "Degas" || artist == "Monet" || artist == "Picasso" || artist == "Rembrandt") {
            paintings[i] = new FamousPainting(title, artist);
        }
        else {
            paintings[i] = new Painting(title, artist);
        }
    }
    for (int i = 0; i < 3; i++) {
        cout << "\nPainting " << i + 1 << ":" << endl;
        paintings[i]->display();
    }

    return 0;
}













#include <iostream>
#include <string>
using namespace std;
class Marks {
public:
    int Roll;
    string name;
    int marks;

    Marks(int Roll, string name, int marks) {
        this->Roll = Roll;
        this->name = name;
        this->marks = marks;
    }
};
class Physics : public Marks {
public:
    Physics(int Roll, string name, int marks) : Marks(Roll, name, marks) {}
};

class Chemistry : public Marks {
public:
    Chemistry(int Roll, string name, int marks) : Marks(Roll, name, marks) {}
};

class Mathematics : public Marks {
public:
    Mathematics(int Roll, string name, int marks) : Marks(Roll, name, marks) {}
};
int main() {
    int num;
    cout << "Enter the number of students: ";
    cin >> num;

    Physics* physics[num];
    Chemistry* chemistry[num];
    Mathematics* mathematics[num];

    for (int i = 0; i < num; i++) {
        int Roll, physicsMarks, chemistryMarks, mathematicsMarks;
        string name;

        cout << "\nEnter the details of student " << i + 1 << ":" << endl;
        cout << "Roll Number: ";
        cin >> Roll;
        cout << "Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Physics Marks: ";
        cin >> physicsMarks;
        cout << "Chemistry Marks: ";
        cin >> chemistryMarks;
        cout << "Mathematics Marks: ";
        cin >> mathematicsMarks;

        physics[i] = new Physics(Roll, name, physicsMarks);
        chemistry[i] = new Chemistry(Roll, name, chemistryMarks);
        mathematics[i] = new Mathematics(Roll, name, mathematicsMarks);
    }
    int totalPhysics = 0;
    int totalChemistry = 0;
    int totalMathematics = 0;
    for (int i = 0; i < num; i++) {
        totalPhysics += physics[i]->marks;
        totalChemistry += chemistry[i]->marks;
        totalMathematics += mathematics[i]->marks;
    }
    double averagePhysics = (double)totalPhysics / num;
    double averageChemistry = (double)totalChemistry / num;
    double averageMathematics = (double)totalMathematics / num;
    cout << "\nTotal marks of each student in Physics: " << totalPhysics << endl;
    cout << "Total marks of each student in Chemistry: " << totalChemistry << endl;
    cout << "Total marks of each student in Mathematics: " << totalMathematics << endl;
    cout.precision(2);
    cout << "\nAverage marks of the class in Physics: " << fixed << averagePhysics << endl;
    cout << "Average marks of the class in Chemistry: " << fixed << averageChemistry << endl;
    cout << "Average marks of the class in Mathematics: " << fixed << averageMathematics << endl;

}























#include <iostream>
#include <string>
using namespace std;
class Vehicle{
private:
	float mileage;
	float price;
public:
	Vehicle(){}
	Vehicle(float mileage,float price){
		this->mileage=mileage;
		this->price=price;
	}
	float getMileage(){
		return this->mileage;
	}
	float getPrice(){
		return this->price;
	}
	virtual void display(){
		cout<<"Mileage: "<<mileage<<"\n";
		cout<<"Price: "<<price<<"\n";
	}
};

class Car:public Vehicle{
private:
	float ownershipCost;
	int warranty;
	int seatingCapacity;
	string fuelType;
public:
	Car(){}
	Car(float mileage,float price,float ownershipCost,int warranty,int seatingCapacity,string fuelType):Vehicle(mileage,price){
		this->ownershipCost=ownershipCost;
		this->warranty=warranty;
		this->seatingCapacity=seatingCapacity;
		this->fuelType=fuelType;
	}
	float getOwnershipCost(){
		return this->ownershipCost;
	}
	int getWarranty(){
		return this->warranty;
	}
	int getSeatingCapacity(){
		return this->seatingCapacity;
	}
	string getFuelType(){
		return this->fuelType;
	}
	void display(){
		cout<<"Car\n";
		Vehicle::display();
		cout<<"Ownership Cost: "<<ownershipCost<<"\n";
		cout<<"Warranty: "<<warranty<<"\n";
		cout<<"Seating capacity: "<<seatingCapacity<<"\n";
		cout<<"Fuel type: "<<fuelType<<"\n";
	}
};
class Bike:public Vehicle{
private:
	int numberCylinders;
	int numberGears;
	string coolingType;
public:
	Bike(){}
	Bike(float mileage,float price,int numberCylinders,int numberGears,string coolingType):Vehicle(mileage,price){
		this->numberCylinders=numberCylinders;
		this->numberGears=numberGears;
		this->coolingType=coolingType;
	}
	int getNumberCylinders(){
		return this->numberCylinders;
	}
	int getNumberGears(){
		return this->numberGears;
	}
	string getCoolingType(){
		return this->coolingType;
	}
	void display(){
		cout<<"Bike\n";
		Vehicle::display();
		cout<<"Number cylinders: "<<numberCylinders<<"\n";
		cout<<"Number gears: "<<numberGears<<"\n";
		cout<<"Cooling type: "<<coolingType<<"\n";
	}
};

class Audi:public Car{
private:
	string modelType;
public:
	Audi(float mileage,float price,float ownershipCost,int warranty,int seatingCapacity,string fuelType):
	  Car(mileage,price,ownershipCost,warranty,seatingCapacity,fuelType){
		  this->modelType="Audi";
	  }
	  void display(){
		  Car::display();
		  cout<<"Model type: "<<modelType<<"\n";
	  }
};
class Ford:public Car{
private:
	string modelType;
public:
	Ford(float mileage,float price,float ownershipCost,int warranty,int seatingCapacity,string fuelType):
	  Car(mileage,price,ownershipCost,warranty,seatingCapacity,fuelType){
		  this->modelType="Ford";
	  }
	  void display(){
		  Car::display();
		  cout<<"Model type: "<<modelType<<"\n";
	  }
};
class Bajaj:public Bike{
private:
	string makeType;
public:
	Bajaj(float mileage,float price,int numberCylinders,int numberGears,string coolingType):
	  Bike(mileage,price,numberCylinders,numberGears,coolingType){
		  this->makeType="Bajaj";
	  }
	  void display(){
		  Bike::display();
		  cout<<"The make-type: "<<makeType<<"\n";
	  }
};
class TVS:public Bike{
private:
	string makeType;
public:
	TVS(float mileage,float price,int numberCylinders,int numberGears,string coolingType):
	  Bike(mileage,price,numberCylinders,numberGears,coolingType){
		  this->makeType="TVS";
	  }
	  void display(){
		  Bike::display();
		  cout<<"The make-type: "<<makeType<<"\n";
	  }
};
int main(){
	Audi ca(5000,2600,8000,15,1,"diesel");
	Audi cf(1500,1600,2500,2,2,"petrol");
	Bajaj bb(1500,18000,2,2,"diesel");
	TVS bt(1600,1200,1,5,"liquid");
	ca.display();
	cout<<"\n";
	cf.display();
	cout<<"\n";
	bb.display();
	cout<<"\n";
	bt.display();

	return 0;
}