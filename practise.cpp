#include <iostream>
using namespace std;
 
//int main(){



/*    string name ;
int age;

cout<< "What's your name ? ";
cin >> name ;

cout <<"What's your age ? " ;
cin>> age ;

cout << "Hello " << name <<'\n' ;
cout << "You are " << age  << " years old.";
*/


// relational operator ::
/*
int x,y,sum, difference, product, divide;
cout << "Enter the value of x = "<<'\n';
cin>> x;

cout << "Enter the value of y ="<<'\n';
cin >> y;

sum = x+y;
difference = x- y;
product = x*y;
divide = x /y;

cout<< "The sum is  : " << product << endl;

*/

//conditional ;
//finding the positive and negetive number .

/*
int n;
cout<<"Enter a number : "<<'\n';
cin>> n;
if(n>=0){
    cout<<"the given number is positive";
} else {
    cout <<"The number is negetive."<<endl;
}


*/


//finding the factorial of n;
/*
int  i, n,sum;
cout<<"Enter the value of n :  ";
cin >> n;

sum= 1;
for(i=1; i<=n ; i++){
sum = sum * i;

}
cout<< sum << endl;
  */ 

    //------->>>>>>> table of number n;

    /*
int i,n,sum ;
cout << "Enter the number of the table : ";
cin >> n;

for(i=1; i<=10; i++){
sum= n * i ;
cout<< n << " x" <<  i << " =" << sum << endl;
}


*/

//-------->>>>>>> conditional operators 
//finding the marks range in the 40 -100.

/*
int marks;
cout<< "Enter marks : ";
cin >> marks;

if ( marks >= 33 && marks <=40 ){
    cout << "C" ;
}else if ( marks >=41 && marks <=60){
    cout << "A - ";
}else if ( marks >=61 && marks <= 79){
    cout << "A ";
}else if (marks >=81 && marks <=100){
    cout << "A+ "<<endl ;
}else {
    cout << "Out of range ";
}
*/

/* ------->>>> print the sum  from the number from m to n .
*/
/*
int m,n,d,sum,i ;

cout<< "Enter the value where you want to sum : ";
cin>> m;

cout << "Enter the value where you want to end sum : ";
cin>> n;

cout << "Enter the difference : ";
cin>> d;



sum =0;
for(int i=m; i<=n; i= i+d ){
 
sum = sum + i;
}
cout << "The total sum of the series is : "<< sum << endl;   



*/

//------------>>>>> A number is prime or not ??
/*

int n,i;
cout<< " Enter a number : ";
cin >> n;

for ( i=2; i=n-1; ; i++){  // for more optimization i * i <=n
    if(n%i == 0){
        cout<< "It's a non prime number";
        return 0;
    }

}
 cout<< "it's a prime number" << endl;
    
*/



//**************************   nested loop 
/*
ques : print 
 
* * * *
* * * *
* * * *
* * * *

*/
/*

int r,c,i,j;
cout<< "Enter the amount of star you want to print in row : ";
cin>> r;
cout<< "Enter the amount of star you want to print in column : ";
cin>> c;

for(i=1; i<=r ; i++){
    for(j=1; j<=c; j++){
    cout << " * ";
}
cout << '\n' ;
}





*/





//----------->>>>>>>>>>
/*
Ques : make n dimentions square pattern with numbers
for n= 3
1 2 3
1 2 3
1 2 3
like that for nth number . write the code.

*/

/*
int i,j,n;
cout<< "Enter the square dimention you want: ";
cin >> n;

for (i=1; i<=n ; i++){
    for(j=1; j<=n; j++){
    cout<< j <<" "  ;
}
cout <<'\n';
}
*/




// --------->>>>>>>>>
/*
1 2 3
4 5 6 
7 8 9
*/
/*
int i,j,n;

cout << "Enter the square you want to print like that : ";
cin >> n;

int num =1;
for( i=1; i<=n ; i++ ){
    for( j=1; j<=n ; j++){
        cout<< num <<" ";
        num= num+1;
    }
 cout <<'\n';   

}

*/



//------------>>>>>>>>>>>>>>>
/*
print 
*
* *
* * *
* * * *


*/
/*

int n,i,j;
cout<< "Enter the number of row : ";
cin >> n;

for(i=1;i<=n; i++){
    for(j=1;j<=i; j++){
        cout << "*"<<" ";

    }
    cout <<'\n';
}
    */


    //------------>>>>>>>>
    /*
    1
    2 2 
    3 3 3
    4 4 4 4
    for n=4.
    */

/*
    int i,j,n;
    cout<< "Enter the value of the row : ";
    cin>> n;


    for(i=1;i<=n;i++){
        for(j=1;j<=i; j++){
            cout << i<<" " ;

        }
        cout << '\n';
    }

*/

//----->>>>>>>>>
/*
print 
1
1 2
1 2 3 
1 2 3 4 

*/
/*
int i,j,n;

cout<< "Enter the number of row:   ";
cin>> n;

for(i=1; i<=n; i++ ){
    for(j=1; j<=i; j++){
        cout << j << " ";

    }
    cout<< '\n';
}

*/


//------------->>>>>>>>>>>
/*
print

1
2 1
3 2 1
4 3 2 1

*/

/*
int i,j,n;
cout<< "Enter the number of row : ";
cin>> n;


for(i=0; i<n; i++){
    for(j=i+1; j>0 ; j--){
        cout << j <<" ";
    }
    cout << '\n';
}

*/

//--------->>>>>>>>
/*
floyd's triangle :

1
2 3
4 5 6
7 8 9 10
*/


/*
int i,j,n;
cout<< "Enter row  : ";
cin>> n;

int sum =1;
for( i=1; i<=n;i++){
    for(j=1;j<=i ; j++){
        cout<< sum << " ";
        sum = sum +1;
    }
    cout<< '\n';
}
*/

//------->>>>>>
/*
inverted triangle patterns
print 
1 1 1 1
  2 2 2
    3 3
      4
*/

/*
int n;
    cout << "Enter rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {

        // print spaces (2 spaces per level)
        for (int j = 1; j < i; j++) {
            cout << "  ";
        }

        // print numbers
        for (int j = i; j <= n; j++) {
            cout << i;
            if (j < n) cout << " ";
        }

        cout << endl;
    }
*/



//---------->>>>>>>>>>>>
/*
Ques : 
pyramid patterns: 
        1
     1  2  1
   1  2  3  2  1
 1  2  3  4  3  2  1     
*/

/*

int i,n,j;
cout<<"Enter rows: ";
cin >> n;


for( i=0; i<n; i++){
    //spaces n-i-1
    for(j=0; j< (n-i-1); j++){
        cout << " ";
    }
    // num 1 : 1 to i+1
    for (j=1; j<= i+1; j++){
        cout<< j <<" ";
    }
    // num 2 : i to 1
    for (j=i; j>0; j--){
        cout << j<< " " ;
    }
    cout << '\n';
}
    */

    /*
//------------->>>>>>>>>>QUES
print this hollow dimond pattern--


            *
          *   *
        *   *   *
      *   *   *   * 
        *   *   *
          *   *
            *

*/
/*
int i,j,n;
cout<<"Enter the number of row: ";
cin>> n;

for(i=1;i<=n;i++){
    // spaces
    for(j=1;j<= n-i; j++){
        cout << " ";
    }
    // * printings
    for(j=1;j<=i;j++){
        cout <<  "* ";
    }
    
    cout<< '\n';
}

for(i=n-1; i>=1; i--){
    for(j=1;j<= n-i; j++){
        cout << " ";
    }
    for(j=1;j<=i;j++){
        cout << "* ";
    }
    
     cout<< '\n';
}
*/


//------->>>>
/*
QUES: 
            *
          *   *
        *       *
      *           * 
        *       *
          *   *
            *
*/
/*
int i,j,n;

cout << " Enter rows: ";
cin>> n;

for(i=1;i<=n;i++){

    for(j=1;j<=n-i;j++){
        cout << " ";
    }
    for(j=1;j<=i;j++){
        if(j == 1 || j == i){
            cout << "* ";
        } else {
            cout << "  ";
        }
    }

    cout << '\n';
}

for(i=n-1;i>=1;i--){

    for(j=1;j<=n-i;j++){
        cout << " ";
    }
    for(j=1;j<=i;j++){
        if(j == 1 || j == i){
            cout << "* ";
        } else {
            cout << "  ";
        }
    }

    cout << '\n';
}
*/


//---------->>>>>>>>>>>
/*
QUES
*      *
**    **
***  ***
********
********
***  *** 
**    **
*      *
*/

/*
int i,j,n;

cout << "Enter rows : ";
cin >> n;

for(i=1;i<=n;i++){
    for(j=1; j<=i;j++){
        cout << "*";
    }
    for(j=1;j<=( 2 * (n -i ));j++){
    cout<<" ";
    }
    for(j=1;j<=i;j++){
    cout << "*";
    }

    cout<< "\n";
}

for(i=n-1;i>=1;i--){
    for(j=1; j<=i;j++){
        cout << "*";
    }
    for(j=1;j<=( 2 * (n -i ));j++){
    cout<<" ";
    }
    for(j=1;j<=i;j++){
    cout << "*";
    }

    cout<< "\n";
}
    */


 //------->>>FUNCTIONS 
 
 /*
first here basics of functions are discussed.
let's suppose to sum calculations and 
finding minimum or maximum numbers.
 */
/*
//function declaration
//sum of 2 number .
 int sum;
 int sumOfNum(int a, int b){
    sum= a+ b;
 }

 int main(){
    cout <<"sum is  = " <<sumOfNum(10,5)<<endl; //function call and print
 
    return 0;
}
 */

 // number which bigger or smaller.


/*
 int maxOftwo( int a,int b){
    if(a>b){
        return a;
    } else {
        return b;
    }
 }

 int main (){
    int a,b;
cout<<"Enter first number : ";
cin >> a;
cout<<"Enter second number : ";
cin >> b;
    cout <<"The maximum number is : "<< maxOftwo(a,b)<<endl;
 
*/

//---->>>>>QUES : 
/*
calculate the sum of numbers from 1 to N using function .
*/
int n,sum;

int sumOfNum(int n){
    sum= 0;
    for(int i=1;i<=n; i++){
         sum= sum + i;
    }
    return sum;
}

int main(){

    cout<< "Enter the number 1 to you want to sum : ";
    cin>> n;
    cout <<" The sum from 1 to " << n << " is : "<< sumOfNum(n)<<endl;


return 0;
}
 


