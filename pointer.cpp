#include<iostream>
using namespace std;

/*
references : https://youtu.be/qYEjR6M0wSk?si=bYUV6MKGgC8PiVRD
*/


// (1), (2), (3), (4) for making available the code to remove them.



/*(1)--->>>>> example -01
int main (){

/*
make a chart of 3 box , in the first box take price = 25, 
in the second box name = *ptr which consists of the address
of the price box and in the 3rd box naming **ptr1, containing
the address of the *ptr. and its address is again different.
*/
   
/*(2)  int price = 25 ; // 1st box
    int *ptr = &price; // keeping the add. of 1st in the 2nd.
    int** ptr1=& ptr; // keeping the add.in the 3rd 



    cout << ptr << endl; // printing value of ptr or add of the price(1)
    cout << &price <<endl; // printing addr. of price
    cout<< &ptr << endl; // printing addr of ptr or value of **ptr1
    cout << ptr1<<endl; // printing value of ptr1
    cout << *(ptr1) << endl; /*
                    first finding the value of 
                    ptr1 which is the address of ptr. So, it
                    will show the value of the ptr which again
                    the adress of the price.
                    it is called dereferencing .
                    */
                                  
/*(3)    cout << *(*(ptr1))<<endl; /*
                    it will print the value of price.
                    first it will find the value of ptr1,
                    then it will show the value of ptr (*(ptr))
                    ,again dereferencing it will get the address
                    of price and finally show the value of price.
    */
// if we want to get the zero address of the pointer-->>
/*(4)   int *ptr2 =NULL ;
    cout << ptr2 <<endl;

    */
/*
        Qs

        Predict Output
     

        int a = 5;
        int *p = &a;
        int ** q = &p;

        cout << *p << endl;
        cout << ** q << endl;
        cout << p << endl;
        cout << *q << endl;

        answers :
        1. 5
        2. 5
        3. addr of a or value of p
        4. addr of a or value of p.
*/

//--->>> pass by reference :
/*
    here first we take a data in main function, then we
    pass the address of the main functions data to another
    function . And then if we change the value in that another
    function , due to having the address of the main 
    functions data in another function , thus the value of 
    the main function also changes.
*/

//--------->>>>>>>example -02

/*
void changeA ( int *ptr3 ){
    *ptr3 =  100; 
                //now here inputting the value in the address
                //of the a which is again equal to the 
                //value of ptr3 . thus inputting value in
                //ptr3 means chamges the value in a.
                
}


int main (){
int a = 10;
changeA(&a); // addr of a = value in ptr3


cout <<"inside main function  :" << a <<endl; 
*/


// ------->>>>> array pointer

int main(){


/*   example -03
int a = 10;
int *ptr= &a;

cout << ptr << endl;
ptr ++; // +4 byte due to integer value
cout << ptr << endl;
*/

/*-->arithmetic operation .
int arr[]= {1,2,3,4,5};

cout << *(arr) << endl;
cout << *(arr+1) << endl;
cout << *(arr+2) << endl;
cout << *(arr+3) << endl;
cout << &*(arr+4) << endl;// addr of 5
*/
//comparing in the memory .
/*
int arr []= {1,2,3,4,5};

int *ptr4; //addr of ptr4
int *ptr5= ptr4 +2; //add of ptr5 =addr of ptr4 + 8


cout<< ptr5 -ptr4 << endl; // 8 byte = 2 integer
*/


int arr []= {1,2,3,4,5};

int *ptr6;
int *ptr7;


cout<< ptr6 <<endl;
cout<< ptr7 <<endl;

cout << (ptr6 < ptr7 )<< endl;

    return 0;
}