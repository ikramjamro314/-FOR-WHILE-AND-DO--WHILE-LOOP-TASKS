#include <iostream>
//#include <conio.h>
using namespace std;
int main() {
//Task # 1: Generate alphabets from A to Z.  (ASCII code for A=65 and Z=90).
          /*
    cout << "alphabets are : ";
    for (char ch = 'A'; ch >= 65 && ch <= 90; ch++) {

       cout<<" "<<ch<<endl;
    }
    */

//Task # 2: Generate a series of Odd numbers and even numbers (up to 20) using for  loop.
             /*
    cout<<" ODD \t EVEN "<<endl;
    for (int x = 1; x<=20; x++) {
        if(x%2!=0) {
            cout<<x;
            cout << "\t";
        }
        else {
            cout<<x<< endl;
        }
    }
    */
//Task # 3: Write a program that prints all Roll numbers of your class using for loop.
                  /*
    cout << "roll no of software department is : " << endl;
    int roll;
    for (roll = 1; roll <= 20; roll++) {
        if (roll <= 9) {
            cout << "22SW0" << roll << endl;
        } else {
            cout << "22SW" << roll << endl;
        }
    }
           */
//Task # 4: Consider Task=#1 and separate vowels and consonants.
                 /*
    char ch;
    cout<<"vowels \t consonant "<<endl;
    for(ch='A';ch>=65 && ch<=90;ch++) {
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            cout << ch;
        } else {
            cout << "\t" << ch << endl;
        }
    }
        */
// Task # 5  Write a program to print the table of characters that are equivalent
//  to the Ascii codes from 97 to 122.  The program will print 10 characters per line.
            /*
    int q=0;
    for( int ch = 97 ; ch<=122 ; ch++){
        cout << (char) ch << "  " ;
        q++;
        if(q==10) {
            cout << endl;
            q = 0;
        }
    }
           */
// Task # 6: Write a C++ program that takes two characters as input and display all
// the characters between these two characters. And also count the number of characters
                   /*
int count=0;
    char a,d;
    cout<<"enter first character : ";
    cin>>a;
    cout<<"enter second character : ";
    cin>>d;
    for(char x=a; x<d ; x++) {
        if (x > a)
            cout <<x<<" ";
        count++;

    }
    cout<<"\n number of characters are :  "<<count;

               */
// Task # 7: Write a program called SumAndAverage to produce the sum of 1, 2, 3, ..., to 100.
 // Also compute and display the average. The output shall look like:
// The sum is 5050
// The average is 50.0
           /*
    int sum=0;
int x;
    for(x =1;x<=100;x++) {
        sum+=x;

        }
    cout<<"the sum is "<<sum<<endl;
    cout<<"the average is "<<(float)sum/x;

          */
// Task # 8 Write a program that prints the table of number 5 up to 15 (i.e 1*5=5 ……… 15*5=75).
      /*
 cout<<"The table of 5 is : "<<endl;
 for(int i=1;i<=15;i++){
 	
 	cout<<i<<"*"<<"5"<<"="<<i*5<<endl;
 }
       */
// Task# 9 write a program that takes an inter as an input and prints its factorial Output.
      /*
	int num,fact;
    cout<<"Enter any number : " ;
    cin>>num;
    if(num<0 || num==0){
    cout<<"Invalid input ";
}
    else {
    	fact=1;
    for(int i=num;i>=1;i--){
    	fact=fact*i;
	}

	 cout<<num<<"!="<<fact;
}
       */

































