#include <iostream>
using namespace std;

class Author {
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
		Author *author;
		double price;
		int qty = 0;
		 
	public :
		Book (string bookName, Author author[], double price){
			this -> author = new Author [2];
			for (int i = 0 ; i < 2 ; i++ ){
				this -> author [i] = author [i];
			}
			this -> bookName = bookName;
			this -> price = price;
			
		}
		
		Book (string bookName, Author author[], double price, int qty){
			this -> author = new Author [2];
			for (int i = 0 ; i < 2 ; i++ ){
				this -> author [i] = author [i];
			}
			this -> bookName = bookName;
			this -> price = price;
			this -> qty = qty;
		}
		
		string getName(){
			return bookName;
		}
		
		Author getAuthor (){
			return *author;
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
		
		string getAuthorName (){
			return author [0].getName() + "\n" + author[1].getName();
		}
		
		string toString (){ 
			return bookName + "\n" + author[0].toString() + "\n" + author[1].toString() + "\n" + to_string (price) + ", " + to_string (qty) + "\n";
		}
};

int main(){
	
	Author author [2] = {Author("Jordanatha", "jordanatha98@hotmail.com", 'm') , Author("Jordan", "jordanathaaa@hotmail.com", 'm')};
	
	Book myBook ("Haha Book", author, 69.9, 100);
	
	cout << myBook.toString();
	
	cout << myBook.getAuthorName();
}
