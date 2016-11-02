#include <iostream>
#include <cstring>
using namespace std;

class Author{
	private :
		string name;
		string email;
		char gender;
	
	public :
		Author (string name, string email, char gender){
			this -> name = name;
			this -> email = email;
			this -> gender = gender;
		}
		
		void setEmail (string email){
			this -> email = email;
		}
		
		string getName(){
			return name;
		}
		
		string getEmail (){
			return email;
		}
		
		char getGender (){
			return gender;
		}
		
		string toString (){
			return name + ", " + email + ", " + gender;
		}
};

int main (){
	string inputName;
	string inputEmail;
	char inputGender;
	
	cout << "Input Name : ";
	getline(cin, inputName);
	cout << endl;
	
	cout << "Input Email : ";
	getline(cin, inputEmail);
	cout << endl;
	
	cout << "Input Gender (m/f) : ";
	cin >> inputGender;
	cout << endl;
	
	Author obj (inputName, inputEmail, inputGender);
	
	cout << obj.toString();
}

