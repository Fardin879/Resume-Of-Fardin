#include<iostream>
#include<string>
using namespace std;

/* example -1 : In your university , you want to 
take data from your teachers but of huge numbers.
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


/*

but if we want to reduce the access of the salary from the
general management then lets put it in the private keeping
the others in the public function.
*/
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
*/ //error will be seen as salary is in private function.


    /*
    to eradicate this problem we will need to set a 
    "setter" and a "getter " function in the class function.
    let's make it!
   */





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
//even not mentioning in main function it is working or getting output.
   


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
   // parameter.
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
   // parameter.
   //left name -->> object's name.
   // right name -->> constructor's parameter.



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
   //this is a special pointer that idetifies the object's
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
// reqirement in dynamic memory location.

class Student{
    public:
    string name;
    int roll;
    double *cgpaPtr;

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
        this->cgpaPtr = this->cgpaPtr;
    }

    //if we reqired 

    void getInfo(){
        cout<<"name is :"<<name<<endl;
        cout<<"roll is :"<<roll<<endl;
        cout<<"cgpa is :"<<*cgpaPtr<<endl;

    }

};

int main(){
    Student s1("Fardin",2303054,8.9);
  

    Student s2(s1);
    s2.getInfo();


return 0;
}
