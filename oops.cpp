#include<iostream>
#include<string>
using namespace std;

/*
// example -1 : In your university , you want to 
//take data from your teachers but of huge numbers.

class Teacher {
    //properties 
public: 
    string name ;
    string dept ;
    string subject;
    double salary;


    //methods

    //member function : its the function under class function
    void changeDept (string newDept){
        dept = newDept;
    }
};


int main (){

    Teacher t1;
    t1.name = "Fardin";
    t1.dept ="EEE";
    t1.subject = " FUC*ING CSE";
    t1.salary=  80000;

    cout<< t1.subject <<endl;

*/



//-------->>>>>>>
//but if we want to reduce the access of the salary from the
//general management then lets put it in the private keeping
//the others in the public function.

/*
class Teacher {
    //properties 
private:
    double salary;    
public: 
    string name ;
    string dept ;
    string subject;
    double salary;


    //methods

    //member function : its the function under class function
    void changeDept (string newDept){
        dept = newDept;
    }
};


int main (){

    Teacher t1;
    t1.name = "Fardin";
    t1.dept ="EEE";
    t1.subject = " FUC*ING CSE";
    t1.salary=  80000;

    cout<< t1.subject <<endl;
    cout << t1.salary <<endl;
 //error will be seen as salary is in private function.
*/

  
 
 //------>>>>>
    //to eradicate this problem we will need to set a 
    //"setter" and a "getter " function in the class function.
   // let's make it!
   





/*
class Teacher {
    //properties 
private:
    double salary;    
public: 
    string name ;
    string dept ;
    string subject;



    //methods

    //member function : its the function under class function
    void changeDept (string newDept){
        dept = newDept;
    }
   
   // indirectly acessing data from private function:
   // -->> as from this function salary data can be accessed
   //-->> but from the main function it can't be accessed ,so
   // -->> we are making another function to extract the value
   //-->> from this function and supplying it to main function.thus error doesn't occurs.
    // setter function
   void setSalary(double s){
        salary = s;
    }
    //getter function
    double getSalary(){
        return salary;
    }
};

    class Student {
        private:
        double grade ;
       
        public:
        string name;
        int roll;
        int age;
        double marks;


     //similarly done for grade of student like salary of teacher.   

       void setGrade(double g){
            grade = g ;
        }
       double getGrade(){
            return grade;
        }
    };



int main (){

    Teacher t1;
    t1.name = "Fardin";
    t1.dept ="EEE";
    t1.subject = "FUC*ING CSE";
    t1.setSalary(80000);
    Student s1;
    s1. name = "Rahat ";
    s1.setGrade(3.75);

    cout<<"Mr."<<t1.name <<" is the teacher of "<< t1.subject <<endl;
    cout << "The salary of Mr." <<t1.name << " is :"<< t1.getSalary() <<endl;
    cout << s1.name <<endl;
    cout <<"The grade of "<< s1.name <<"is : "<<s1.getGrade()<<endl;
*/
 



//Encapsulation: To make a class and declare the methods(member functions)
// in that class is called the encapsulation.(wrapping data and member function in a single unit)



//data hiding : using the private and protected access modifier 
//to hide the member function or properties outside the class.




//----->>>>>> Constructors : 
//-->> non parameterised
/*
class Student{
    
    public : 
    string name;
    string dept;
    int roll;
    double salary;
    //making a constructor
    Student(){ // no parameter
       dept="Electrical and Electronic Enginnering. ";
    }

};
int main(){
 Student s1;
 Student s2;
 s1.name = "Rohan";
 s2.name="Roja ";

cout<< s1.name <<endl;
cout<< s2.name <<endl;
cout<< s1.dept <<endl;
//even not mentioning in main function  dept but it is working as mentioned in constructor .
   


*/




//-->> parameterised constructor......


/*
class Teacher {
    //properties 
  
public: 
   Teacher(){
    dept = "EEE";
   }
//different teacher type but distinguished by the parameter
// for example first Teacher having no data type in the
//parameter , thus it will be identified by the computer
//that it is a different constructor. this phenomenon is called
// [constructor overloading.]
   Teacher(string n,string d, string s,double sal ){
    name =n;
    dept =d;
    subject =s;
    salary =sal;
   }

    string name;
    string dept;
    string subject;
    double salary;

   void getInfo(){
    cout<< "name :"<< name <<endl;
    cout<< "subject :"<< subject <<endl;

   }

};

int main (){
Teacher t0;
cout<<"Department :"<<t0.dept<<endl;
Teacher t1();
Teacher t1("Robin","EEE","Machine-I",40000);
t1.getInfo();
*/






//--->>> copy constructor 



/*
class Teacher {
    //properties 
  
public: 

    string name;
    string dept;
    string subject;
    double salary;
   Teacher(){
    dept = "EEE";
   }
//different teacher type but distinguished by the parameter
// for example first Teacher having no data type in the
//parameter , thus it will be identified by the computer
//that it is a different constructor. this phenomenon is called
// [constructor overloading.]
   Teacher(string name,string dept, string subject,double salary ){
    this->name =name;
    this->dept =dept;
    this->subject =subject;
    this-> salary =salary;
   }
   //this is a special pointer that idetifies the object's
   // property.
   //left name -->> object's name.
   // right name -->> constructor's parameter.



   void getInfo(){
    cout<< "name :"<< name <<endl;
    cout<< "subject :"<< subject <<endl;

   }

};

int main (){
Teacher t1("Robin","EEE","Machine-I",40000);
t1.getInfo();

Teacher t2("Nafsi","EEE","Electronics-2",40000);
t2.getInfo();
*/



//------->>>>>>copy constructor by default
/*


class Teacher {
     
  
public: 

    string name;
    string dept;
    string subject;
    double salary;
   Teacher(){
    dept = "EEE";
   }

   Teacher(string name,string dept, string subject,double salary ){
    this->name =name;
    this->dept =dept;
    this->subject =subject;
    this-> salary =salary;
   }
 
   void getInfo(){
    cout<< "name :"<< name <<endl;
    cout<< "subject :"<< subject <<endl;

   }

};

int main (){
Teacher t1("Robin","EEE","Machine-I",40000);


Teacher t2(t1); // default copy constructor.
t2.getInfo();

*/


//---> custom copy constructor(shallow) :





/*


class Teacher {
    //properties 
  
public: 

    string name;
    string dept;
    string subject;
    double salary;
 
   Teacher(string name,string dept, string subject,double salary ){
    this->name =name;
    this->dept =dept;
    this->subject =subject;
    this-> salary =salary;
   }
   //  "this" is a special pointer that idetifies the object's
   // parameter.
   //left name -->> object's name.
   // right name -->> constructor's parameter.
  
  
   Teacher(Teacher &orgObj){
    cout<<"I am custom constructor.";
    this->name=orgObj.name;
    this->dept=orgObj.dept;
    this->subject=orgObj.subject;
    this->salary= orgObj.salary;
   }


   void getInfo(){
    cout<< "name :"<< name <<endl;
    cout<< "subject :"<< subject <<endl;
    cout<<"department : "<< dept << endl;

   }

};

int main (){
Teacher t1("Robin","EEE","Machine-I",40000);


Teacher t2(t1); // custom copy constructor.
t2.getInfo();



*/




// ------->>>> deep copy
// reqirement in dynamic memory allocation.

/*
class Student{
    public:
    string name;
    int roll;
    double *cgpaPtr; //dynamically allocated memory pointer which pointing cgpA in the heep.

    Student(string name,int roll,double cgpa){
        this->name=name;
        this->roll=roll;
        cgpaPtr= new double;
        *cgpaPtr= cgpa;
    }

    Student(Student &obj){
        this->name=obj.name;
        this->roll=obj.roll;
        cgpaPtr= new double;
        *cgpaPtr= *obj.cgpaPtr; // allocate memory
         // copy value

    }

    //if we reqired deep copy.

class Teacher
{
public:
    string name;
    string dept;
    double *salaryPtr; // salary shallow copy
    int ID;
    float *bonusPtr; // bonus deep copy.
 

    Teacher(string name,string dept, double salary,int ID,float bonus)
    {
        this ->name= name;
        this->dept=dept;
        salaryPtr = new double;
        *salaryPtr = salary;
        this->ID=ID;
        bonusPtr = new float;
        *bonusPtr = bonus;

    }

    Teacher(Teacher &orgObj)
    {
        cout<<"Hi!I am copy construtctor(default)"<<endl;
        this ->name= orgObj.name;
        this->dept=orgObj.dept;
        this->ID=orgObj.ID;
        this->salaryPtr = orgObj.salaryPtr;
        bonusPtr= new float;
        *bonusPtr= *orgObj.bonusPtr; // only change in between shallow and deep copy code. 
//for deep copy, we make a dynamic allocated memory inside the heep , thats why
//pointer is being used to make a new one.

    }

    void getInfo()
    {
        cout<<"Name :"<<name<<endl;
        cout<<"Department :"<<dept<<endl;
        cout<<"ID :"<<ID<<endl;
        cout<<"salary:"<<*salaryPtr<<endl;
        cout<<"Bonus : "<<*bonusPtr<<endl;
    }


};


int main ()
{
    Teacher t1("Robin chodna","EEE",25000.85,414598,8907.89);
    Teacher t2(t1);
    t1.getInfo();
    *(t2.bonusPtr)=6789.09;
    t1.getInfo();
    t2.name="Ratul Bitla";
    t2.getInfo();


}

/*

//---->>>>>destructor
//the main function of destructor is to deallocate the
//memory.
// to reduce the waste of memeory
//like constructor, destructor is called autometically
//by the compiler . Here the main function works first ,
//then automatically desctructor is called.

class Student{
    public:
    string name;
    int roll;
    double *cgpaPtr; //dynamically allocated memory pointer which pointing cgpA in the heep.

    Student(string name,int roll,double cgpa){
        this->name=name;
        this->roll=roll;
        cgpaPtr= new double;
        *cgpaPtr= cgpa;
    }

 // destructor
 ~Student(){
    cout<<"HI, I am deleting everything"<<endl;
    delete cgpaPtr;

 }

    //if we reqired deep copy.

    void getInfo(){
        cout<<"name is :"<<name<<endl;
        cout<<"roll is :"<<roll<<endl;
        cout<<"cgpa is :"<<*cgpaPtr<<endl;//pointing the new address of the heep 

    }

};

int main(){
    Student s1("Fardin",2303054,8.9);
    s1.getInfo();

    */


//---->>>>>>
//  **********INHERITANCE**************



//types of inheritance :
//**    1. single inheritance :

 //   A
 //   |
 //   B
/*
class A {
};

class B : public A {
};

*/


//**     2.Multilevel Inheritance
/*


    A
    |
    B
    |
    C

    class A {
};

class B : public A {
};

class C : public B {
};

*/


//3. ***   Multiple inheritance
/*
            A     B
             \   /
               C

class A {
};

class B {
};

class C : public A, public B {
};
*/


//3. ***   hierarchial inheritance(tree)
/*

       A
     / | \
    B  C  D


    class A {
};

class B : public A {
};

class C : public A {
};

class D : public A {
};

*/
//3. ***   hybrid inheritance
/*
        A
      /   \
     B     C
      \   /
        D
class A {
};

class B : public A {
};

class C : public A {
};

class D : public B, public C {
};

*/

//When properties & member functions of base class are passed on to the derived class.

/*
class Person{

    public:
    string name;
    int age;

    Person(){
        
    }

    //default constructor
    Person(){

    }

};

class Student : public Person {

    public:
    int roll;


    void getInfo(){
        cout << "name ="<<name <<endl;
        cout << "age ="<<age <<endl;
        cout << "roll ="<<roll <<endl;
    }

};

int main(){

    Student s1;
    s1.name= "Rahil";
    s1.age = 23;
    s1.roll=45;
    s1.getInfo();

    Student s2;
    s2.name= "Rafi";
    s2.age = 33;
    s2.getInfo();

    */

//But if you want to define the student in parameterized
//way then you have to call the previous class parameter in the 
// daughter class. Then you don't need default constructor.





//order of constructor:::::
//at first the parent class is called , then the child class.
//example 01: style -01(with this pointer-you can use deep or shallow copy in such method)
//default constructor / shallow has been used.



/*


class Person{
public:
    string name;
    int age;


Person(string name,int age){
    this ->name = name;
    this->age= age;
    cout<<"Hi! I am parent class"<<endl;
}
};

class Student : public Person{
public:

    int roll ;
    Student(string name, int age, int roll):Person(name,age){
    this->roll= roll;
    cout<<"I am derived class"<<endl;
    }

void showInfo(){
cout<<"Name :"<<name <<endl;
cout<<"age :"<<age <<endl;
cout<<"roll :"<<roll <<endl;

}

};




int main(){
    Student s1("Robin chodna",33,2303050);



s1.showInfo();
*/





//example 01: style -02
//without this pointer(much easier)

/*


class Person{
public:
    string name;
    int age;


Person(){

    cout<<"Hi! I am parent class"<<endl;
}
};

class Student : public Person{
public:

    int roll ;
 student(){
    cout<<"I am derived class"<<endl;
    }

void showInfo(){
cout<<"Name :"<<name <<endl;
cout<<"age :"<<age <<endl;
cout<<"roll :"<<roll <<endl;

}

};




int main(){
    Student s1;
    s1.name="Robin chodna";
    s1.age=23;
    s1.roll=2303050;
s1.showInfo();






*/
//example -02
//constructor are called according to sequence parent ->child
//destructor are called according to the sequence of child ->parent.

/*
class A
{
public:
    A()
    {
        cout<<"Hi!I am A"<<endl;
    }

    ~A()
    {
        cout<<"I delete A"<<endl;
    }
};



class B:public A
{
public:
    B()
    {
        cout<<"HI!I am B "<<endl;
    }

    ~B()
    {
        cout<<"I delete B"<<endl;
    }
};


class C:public A
{
public:
    C()
    {
        cout<<"HI!I am C "<<endl;
    }

    ~C()
    {
        cout<<"I delete C"<<endl;
    }
};


class D:public B,public C
{
public:
    D()
    {
        cout<<"HI!I am D "<<endl;
    }
    ~D()
    {
        cout<<"I delete D"<<endl;
    }
};



int main()
{
    D d;

    return 0;
}
*/

//output
/*
Hi!I am A
HI!I am B
Hi!I am A
HI!I am C
HI!I am D
I delete D
I delete C
I delete A
I delete B
I delete A

//reason: first d object is created by the compiler . then that 
// object calls the derived class b and b again calls a,
//  then b is initialized ,then again d calls c,c calls a.
// after then c is initialized , then come to the derived class d and d is initialized.
*/

// here is a problem , B & C derived from A, but as D derived
// from B,thats why B has been called eliminating C.
// it is called the diamond problem ** 
// when a parent class generates two derived class and 
// another new class is derived from both the derived class
// it creates a diamond problem
// here           A
     //         /   \
     //        B     C
     //         \   /
     //           D

//To solve this problem use , "virtual keyword "
// that will reduce the duplicate copy(ambuguity)
//and make only a common copy for the pathway
// (D -> B -> A and C-> A), it prevents another path (D->C->A)
/*





class A
{
public:
    A()
    {
        cout<<"Hi!I am A"<<endl;
    }

    ~A()
    {
        cout<<"I delete A"<<endl;
    }
};



class B:virtual public A
{
public:
    B()
    {
        cout<<"HI!I am B "<<endl;
    }

    ~B()
    {
        cout<<"I delete B"<<endl;
    }
};


class C: virtual public A
{
public:
    C()
    {
        cout<<"HI!I am C "<<endl;
    }

    ~C()
    {
        cout<<"I delete C"<<endl;
    }
};


class D:public B,public C
{
public:
    D()
    {
        cout<<"HI!I am D "<<endl;
    }
    ~D()
    {
        cout<<"I delete D"<<endl;
    }
};



int main()
{
    D d;

    return 0;
}


*/
/*
********* output :
Hi!I am A
HI!I am B
HI!I am C
HI!I am D
I delete D
I delete C
I delete B
I delete A
*/


///////**********POLYMORPHISM****************

/*
poly- multiple
morph - form
polymorphism is the ability of objects to take on different
forms or behave in different ways depending on the context
in which they are used.


Types -->>
1. Compile time polymorphism(constructor overloading,function overloading)
2.Run Time polymorphism(function overriding, )
*/
/*
/// example of function overriding





class Animal {
public:
    virtual void sound() {
        cout << "Animal makes a sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks" << endl;
    }
};

int main() {
    Animal* a;
    Dog d;

    a = &d;
    a->sound();

    return 0;
}
*/


// ABSTRACTION


/*
Abstraction means showing just necessary thing 
hiding internal calcculations.

#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() = 0;   // pure virtual function
};

class Circle : public Shape {
private:
    float radius;

public:
    Circle(float r) {
        radius = r;
    }

    void area() override {
        float result = 3.1416 * radius * radius;
        cout << "Area of Circle = " << result << endl;
    }
};

class Rectangle : public Shape {
private:
    float length, width;

public:
    Rectangle(float l, float w) {
        length = l;
        width = w;
    }

    void area() override {
        float result = length * width;
        cout << "Area of Rectangle = " << result << endl;
    }
};

int main() {
    Circle c(5);
    Rectangle r(10, 4);

    c.area();
    r.area();

    return 0;
}
*/

