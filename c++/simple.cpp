//#include<iostream>
//using namespace std;
//int main(){
//	cout<< "hello wol";
//	return 0;
//}



//#include<iostream>
//using namespace std;
//int main(){
//	int sum = 10;
//	cout<< "hello world"<< sum;
//	return 0;
//}
//for break a line we use \n



//#include<iostream>
//using namespace std;
//int main(){
////	int a = 3;
////	int b = 7;
////  int a=14, b=14;
////  float pi = 3.15;
////  char c = 'd';
////	cout<< "My name is "<< a<<" . The is My "<< b;
////	cout<< "The value of pi is "<< pi;
////	cout<< "The value of c is "<< c;
//	return 0;
//}



//#include<iostream>
//using namespace std;
//int main(){
//	int num1, num2;
//	cout<<"Enter the value of num1:\n";
//	cin>>num1;
//	cout<<"Enter the value of num2:\n";
//	cin>>num2;
//	cout<<"The sum is "<< num1+num2;
//	return 0;
//}



//#include<iostream>
//using namespace std;
//int main(){
//	int a=10, b=1;
//	/* aritthmetic operators */
//	cout<<"The value of a + b is "<<a+b<<"\n";
//	cout<<"The value of a - b is "<<a-b<<"\n";
//	cout<<"The value of a * b is "<<a*b<<"\n";
//	cout<<"The value of a / b is "<<a/b<<"\n";
//	cout<<"The value of a % b is "<<a%b<<"\n";
//	cout<<"The value of a ++ is "<<a++<<"\n";
//	cout<<"The value of a -- is "<<a--<<"\n";
//    cout<<"The value of ++a is "<<++a<<"\n";
//    cout<<"The value of --a is "<<--<<"\n";
//    cout<<"the value of a == b is"<<(a==b)<<endl;
//    cout<<"the value of a < b is"<<(a<b)<<endl;
//    cout<<"the value of a > b is"<<(a>b)<<endl;
//    cout<<"the value of a <= b is"<<(a<=b)<<endl;
//    cout<<"the value of a >= b is"<<(a>=b)<<endl;
//	return 0;
//}



//#include<iostream>
//using namespace std;
//int main(){
//	int a, b, c;
//	cout<<"Enter the value of a:"<<endl;
//	cin>>a;
//	cout<<"Enter the value of b:"<<endl;
//	cin>>b;
//	c = a+b;
//	cout<<"The sum is "<<c;
//  float d = 34.4;
//  double e = 228.6;
//  cout<<"the value of d is "<<d<<endl<<"the value of e is "<<e;
//  float x = 11;
//  float & y = x;
//	cout<<x<<endl;
//	cout<<y<<endl;
//	return 0;
//}




//#include<iostream>
//using namespace std;
//int main(){
//	int a = 34;
//	cout<<"The value of a was: "<<a<<endl;
//	a = 35;
//	cout<<"The value of a is: "<<a<<endl;
//	char c = 'r';
//	cout<<"The value of c was: "<<c<<endl;
//	c = 'e';
//	cout<<"The value of c is: "<<c<<endl;
//	const int a = 34;
//	cout<<"The value of a was: "<<a<<endl;
//	int a = 3, b = 4, c = 5;
//	return 0;
//}



//#include<iostream>
//using namespace std;
//int main(){
//	int age;
//	cout<<"Tell me your age"<<endl;
//	cin>>age;
//	if(age>16){
//		cout<<"You can not come to school"<<endl;
//	}
//	else if(age==9){
//		cout<<"You are a kid and you come to My School"<<endl;
//	}
//	else{
//		cout<<"You can came to school"<<endl;
//	}
//	return 0;
//}



//#include<iostream>
//using namespace std;
//int main(){
//	int i = 1;
//	cout<<i;
//	i++;
//	cout<<i;
//	i++;
//	cout<<i;
//	i++;
//	cout<<i;
//	i++;
//	cout<<i;
//	i++;
//	cout<<i;
//	i++;
//	return 0;
//}



//#include<iostream>
//using namespace std;
//int main(){
//	int a = 3;
//	int* b = &a;
//	cout<<"the address of a is "<<&a<<endl;
//	cout<<"the address of a is "<<b<<endl;
//	
//	cout<<"the value at address b is "<<a<<endl;
//	int** c = &b;
//	cout<<"the is address of b is "<<&b<<endl;
//	cout<<"the is address of b is "<<c<<endl;
//	cout<<"the value at address c is "<<*c<<endl;
//	return 0;
//}



//#include<iostream>
//using namespace std;
//int main(){
//	int marks[4] = {1, 2, 3, 4};
//	int mathMarks[4];
//	mathMarks[0] = 1;
//	mathMarks[1] = 2;
//	mathMarks[2] = 3;
//	mathMarks[3] = 4;
//	cout<<"These are math marks"<<endl;
//	cout<<mathMarks[0]<<endl;
//	cout<<mathMarks[1]<<endl;
//	cout<<mathMarks[2]<<endl;
//	cout<<mathMarks[3]<<endl;
//	cout<<"These are marks"<<endl;
//	cout<<marks[0]<<endl;
//	cout<<marks[1]<<endl;
//	We change the value of 2
//	marks[2] = 10;
//	cout<<marks[2]<<endl;
//	cout<<marks[3]<<endl;
//for (int i = 0; i < 4; i++)
//{
//	cout<<"the value if marks "<<i<<" is "<<marks[i]<<endl;
//}
//int* p = marks;
//cout<<"the value of marks[0] is "<<*p<<endl;
//cout<<"the value of marks[1] is "<<*(p+1)<<endl;
//cout<<"the value of marks[2] is "<<*(p+2)<<endl;
//cout<<"the value of marks[3] is "<<*(p+3)<<endl;
//	return 0;
//}




//#include<iostream>
//using namespace std;
//struct rehan{
//
//	int eId;
//	char favChar;
//	float money;
//}
//int main(){
//	struct rehan rehan;
//    struct rehan ahmad;
//    struct rehan yasin;
//	rehan.eId = 1;
//	rehan.favChar = 'r';
//	rehan.money = 100;
//	cout<<"the value is "<<rehan.eId<<endl;
//	cout<<"the value is "<<rehan.favChar<<endl;
//	cout<<"the value is "<<rehan.money<<endl;
//	return 0;
//}



//#include<iostream>
//using namespace std;
//int sum(int a, int b){
//	int c = a+b;
//	return c;
//}
//int main(){
//	int num1, num2;
//	cout<<"enter first number"<<endl;
//	cin>>num1;
//	cout<<"enter second number"<<endl;
//	cin>>num2;
//	cout<<"the sum is "<<sum(num1, num2);
//	return 0;
//}



//#include<iostream>
//using namespace std;
//int sum(int a, int b){
//	int c = a + b;
//	return c;
//}
//void swap(int a, int b){
//	int temp = a;
//	a = b;
//	b = temp;
//}
//void swapPointer(int* a, int* b){
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//int main(){
//	int x = 4 , y = 5;
//	cout<< "The sum of 4 and 5 is "<<sum(a,b);
//	cout<<"the value of x is "<<x<<" and the value of y is "<<y<<endl;
//	swap(x , y);
//    swapPointer(&x, &y);
//	cout<<"the value of x is "<<x<<" and the value of y is "<<y<<endl;
//	return 0;
//}



//#include<iostream>
//using namespace std;
//inline int product(int a, int b){
//    static int c=0;
//    c = c + 1;
//	return a*b+c;
//}
//float moneyReceived(int currentMoney, int factor=1.04){
//	return currentMoney * factor;
//}
//int main(){
//	int a , b;
//	cout<< "Enter the value of a and b"<<endl;
//	cin>>a>>b;
//	cout<< "The product of a and b is "<<product(a,b)<<endl;
//	cout<< "The product of a and b is "<<product(a,b)<<endl;
//	cout<< "The product of a and b is "<<product(a,b)<<endl;
//	cout<< "The product of a and b is "<<product(a,b)<<endl;
//	cout<< "The product of a and b is "<<product(a,b)<<endl;
//	cout<< "The product of a and b is "<<product(a,b)<<endl;
//	cout<< "The product of a and b is "<<product(a,b)<<endl;
//	cout<< "The product of a and b is "<<product(a,b)<<endl;
//	return 0;
//}



//#include<iostream>
//using namespace std;
//int factorial(int n){
//	if (n<=1){
//		return 1;
//	}
//	return n*factorial(n-1);
//}
//factorial(4) = 4 * factorial(3);
//factorial(4) = 4 * 3 * factorial(2);
//factorial(4) = 4 * 3 * 2 * factorial(1);
//factorial(4) = 24;
//int main(){
//	6! = 6*5*4*3*2*1 = 720
//    int a;
//    cout<<"Enter a number"<<endl;
//    cin>>a;
//    cout<<"The factorial of "<<a<<" is "<<factorial(a)<<endl;
//	return 0;
//}



//#include<iostream>
//using namespace std;
//int sum(float a, int b){
//	cout<<"using function with 2 arguments"<<endl;
//	return a+b;
//}
//int sum(int a, int b, int c){
//    cout<<"using function with 3 arguments"<<endl;
//    return a+b+c;
//}
//int volume(double r, int h){
//	return(3.14 * r *r *h);
//}
//int volume(int a){
//	return a * a * a;
//}
//int volume(int l, int b, int h){
//	return (l*b*h);
//}
//int main(){
//	cout<< "The sum of 3 and 6 is "<<sum(3,6)<<endl;
//	cout<< "The sum of 3 , 7 and 6 is "<<sum(3,7,6)<<endl;
//	cout<< "The volume of cuboid of 3, 7 and 6 is "<<volume(3,7,6)<<endl;
//	cout<< "The volume of cylinder of radius 3 and height 6 is "<<volume(3,6)<<endl;
//    cout<< "The sum of 3 , 7 and 6 is "<<sum(3,7,6)<<endl;
//	cout<< "The sum of 3 , 7 and 6 is "<<sum(3,7,6)<<endl;
//	cout<< "The volume of cube of side 3 "<<volume(3)<<endl;
//	return 0;
//}



//#include<iostream>
//using namespace std;
//class rehan
//{
//	private:
//		int a, b, c;
//	public:
//		int d, e;
//		void setData(int a, int b, int c);
//		void getData(){
//		     cout<<"The value of a is "<<a<<endl;
//		     cout<<"The value of b is "<<b<<endl;
//		     cout<<"The value of c is "<<c<<endl;
//		     cout<<"The value of d is "<<d<<endl;
//		     cout<<"The value of e is "<<e<<endl;
//		}
//};
//void rehan :: setData(int a1, int b1, int c1){
//	a = a1;
//	b = b1;
//	c = c1;
//}
//int main(){
//	rehan rehan;
//	rehan.d = 44;
//	rehan.e = 33;
//	rehan.setData(1,2,4);
//	rehan.getData();
//	return 0;
//}



//#include<iostream>
//using namespace std;
//class rehan{
//		string s;
//		public:
//			void read(void);
//			void chk_bin(void);
//	};
//	void rehan :: read(void){
//		cout<<"Enter a rehan number";
//		cin>>s;
//	}
//	void rehan :: chk_bin(void){
//		for (int i = 0; i < s.length(); i++)
//		{
//			if(s.at(i)!='0' && s.at(i)!='1'){
//				cout<<"incorrect rehan format"<<endl;
//				exit(0);
//		}
//	}
//int main(){
//	rehan b;
//	b.read();
//	return 0;
//}
//#include<iostream>
//using namespace std;
//class Shop{
//	int itemId[100];
//	int itemPrice[100];
//	int counter;
//	public:
//		void initCounter(void) {counter = 0;}
//		void setPrice(void);
//		void displayPrice(void);
//};
// void Shop :: setPrice(void){
// 	cout<<"Enter Id of your item no "<<counter+1<<endl;
// 	cin>>itemId[counter];
// 	cout<<"Enter price of your item"<<endl;
// 	cin>>itemPrice[counter];
// 	counter ++;
// }
// void Shop :: displayPrice(void){
// 	for (int i = 0; i < counter; i++)
// 	{
// 		cout<<"The price of item with id "<<itemId[i]<<" is "<<itemPrice[i]<<endl;
//	 }
// }
//int main(){
//	Shop dukaan;
//	dukaan.initCounter();
//	dukaan.setPrice();
//	dukaan.setPrice();
//	dukaan.setPrice();
//	dukaan.displayPrice();
//	return 0;
//}




//#include<iostream>
//using namespace std;
//class Employee{
//	int id;
//	static int count;
//	public:
//		void setData(void){
//			cout<<"Enter the id"<<endl;
//			cin>>id;
//			count++;
//		}
//		void getData(void){
//			cout<<"The id of this employee is " << id<<" and this is employee number "<<count<<endl;
//		}
//		static void getCount(void){
//			cout<<"the value of count is "<<count<<endl;
//		}
//};
//int Employee:: count;
//int main(){
//	Employee rehan,ahamd,yasin;
//	rehan.setData();
//	rehan.getData();
//	Employee::getCount();
//	
//	ahamd.setData();
//	ahamd.getData();
//	Employee::getCount();
//	
//	yasin.setData();
//	yasin.getData();
//	Employee::getCount();
//	return 0;
//}



//#include<iostream>
//using namespace std;
//class Employee{
//	int id;
//	int salary;
//	public:
//		void setId(void){
//			salary = 122;
//			cout<<"enter the id of employee"<<endl;
//			cin>>id;
//		}
//		void getId(void){
//			cout<<"the id of this employee is "<<id<<endl;
//		}
//};
//int main(){	
////Employee rehan,yasin,ahmed;
////rehan.setId();
////rehan.getId();
//Employee fb[4];
//for (int i = 0; i < 4; i++)
//{
//	fb[i].setId();
//	fb[i].getId();
//}
//	return 0;
//}




//#include<iostream>
//using namespace std;
//class complex{
//	int a;
//	int b;
//	public:
//	void setData(int v1, int v2){
//	a = v1;
//	b = v2;	
//	}
//	void setDataBySum(complex o1, complex o2){
//		a = o1.a + o2.a;
//		b = o1.a + o2.b;
//	}
//	void printNumber(){
//		cout<<"your complex number is "<<a<<"+"<<b<<"i"<<endl;
//	}
//};
//int main(){
//	complex c1, c2, c3;
//	c1.setData(2, 3);
//	c1.printNumber();
//	
//	c2.setData(1, 2);
//	c2.printNumber();
//	
//	c3.setDataBySum(c1, c2);
//	c3.printNumber();
//	return 0;
//}





//#include<iostream>
//using namespace std;
//class Complex{
//	int a, b;
//	public:
//		void setNumber(int n1, int n2){
//			a = n1;
//			b = n2;
//		}
//		friend Complex sumComplex(Complex o1, Complex o2);
//		void printNumber(){
//			cout<<"your number is "<<a<<" + "<<b<<"i"<<endl;
//		}
//};
//Complex sumComplex(Complex o1, Complex o2){
//	Complex o3;
//	o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
//	return o3; 
//}
//int main(){
//	Complex c1, c2, sum;
//	c1.setNumber(1, 4);
//	c1.printNumber();
//	 
//	c2.setNumber(5, 8);
//	c2.printNumber();
//	sum = sumComplex(c1, c2);
//	sum.printNumber();
//	return 0;
//}





//#include<iostream>
//using namespace std;
//class Complex;
//class Calculator{
//	public:
//		int add(int a, int b){
//			return (a + b);
//		}
//		int sumRealComplex(Complex o1, Complex o2){
//			return (o1.a + o2.a);
//		}
//};
//
//class Complex{
//	int a, b;
//	friend int Calculator :: sumRealComplex(Complex o1, Complex o2);
//	public:
//		void setNumber(int n1, int n2){
//			a = n1;
//			b = n2;
//		}
//		void printNumber(){
//			cout<<"your number is "<<a<<" + "<<b<<"i"<<endl;
//		}
//};
//int main(){
//	cout<< "hello wol";
//	return 0;
//}




//#include<iostream>
//using namespace std;
//int main(){
//	cout<< "hello wol";
//	return 0;
//}