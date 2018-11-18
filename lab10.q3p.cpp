//including library
#include<iostream>
using namespace std;

//creating class
class rectangle {
   //making the class public
	public:
	int l;
	int b;
	int area(void){
		return l*b;
	}
	int perimeter(void){
		int p = (l+b);
		return 2*p;
	}
};

int main(){
	rectangle r1;
	rectangle r2;

	cout << "enter the length and breadth of the first rectangle : " << endl;
	cin >> r1.l;
	cin >> r1.b;
	cout << "enter the length and breadth of the second rectangle : " << endl;
	cin >> r2.l;
	cin >> r2.b;

	if(r1.area()>r2.area()){
		cout << "The area of the first rectangle is more." << endl;
	}
	
	else if(r1.area()<r2.area()){
		cout << "The area of the second rectangle is more." << endl;
	}

	else {
		cout << "The areas of both the rectangles are same." << endl;
	}

	//comparing the perimeters
	if(r1.perimeter()>r2.perimeter()){
		cout << "The perimeter of the first rectangle is more." << endl;
	}

	else if(r1.perimeter()<r2.perimeter()){
		cout << "The perimeter of the second rectangle  is more." << endl;
	}

	else {
		cout << "The perimeters of both the rectangles are same." << endl;
	}

return 0;
}
