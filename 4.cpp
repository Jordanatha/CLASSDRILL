#include <iostream>
#include <cmath>
using namespace std;

class MyPoint {
	private:
		int x = 0;
		int y = 0;
		
		
	public :
		MyPoint (){
			
		}
		
		MyPoint (int x, int y){
			this -> x = x;
			this -> y = y;
		}
		
		void setX (int x){
			this -> x = x;
		}
		
		int getX (){
			return x;
		}
		
		void setY (int y){
			this -> y = y;
		}
		
		int getY (){
			return y;
		}
		
		void setXY(int x, int y){
			this -> x = x;
			this -> y = y;
		}
		
		int *getXY()
		{
			int *arr = new int [2];
			arr[0] = this->x;
			arr[1] = this->y;
			return  arr;
		}
		
		double distance (){
			x = 0;
			y = 0;
		}
		
		double distance (int x, int y){
			return sqrt(pow((this -> x - x), 2) + pow ((this -> y - y), 2));
		}
		
		double distance (MyPoint another){
			return distance(another.x, another.y);
		}
};


int main (){
	MyPoint obj (5, 6);
	
	cout << obj.getX() << endl;
	cout << obj.getY() << endl;
	
	obj.setXY(5, 6);
	cout << obj.getXY()[0] << endl;
	cout << obj.getXY()[1] << endl;
	
	cout << obj.distance(7, 9);
	
	
	
}
