#include <iostream>
#include <cstring>
using namespace std;

class Author{
	private :
		string name;
		string email;
		char gender;
	
	public :
		Author(){
		}
		
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

class Book {
	private :
		string bookName;
		Author author;
		double price;
		int qty = 0;
		
	public :
		Book (string bookName, Author author, double price){
			this -> bookName = bookName;
			this -> author = author;
			this -> price = price;
			
		}
		
		Book (string bookName, Author author, double price, int qty){
			this -> bookName = bookName;
			this -> author = author;
			this -> price = price;
			this -> qty = qty;
		}
		
		string getName(){
			return bookName;
		}
		
		Author getAuthor (){
			return author;
		}
		
		double getPrice (){
			return price;
		}
		
		void setPrice (double price){
			this -> price = price;
		}
		
		int getQty () {
			return qty;
		}
		
		void setQty (int qty){
			this -> qty = qty;
		}
		
		string toString (){ 
			return bookName + ", " + author.toString() + ", " + to_string (price) + ", " + to_string (qty);
		}
};

int main (){
	Author haha ("j", "jaja", 'm');
	Book myBook ("Jordanatha", haha, 900, 100);
	cout << myBook.toString();
}
