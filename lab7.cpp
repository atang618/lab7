#include "eecs230.h"
#include <vector>

//function declarations
void pointer_fun(int, int);
void pointer_arithmetic_chars();
short greater_val(short *, short *);

void pointer_arithmetic_ints();
void pointer_data(int);

class Student
{
public:
    Student()
    {
        first_name_="Unknown";
        last_name_="Person";
        grad_year_=2018;
    }

    Student(string f_name, string l_name, int g_year)
    : first_name_{f_name}, last_name_{l_name}, grad_year_{g_year}
    {
    }



private:
    string first_name_;
    string last_name_;
    int grad_year_;
};

int main()
{
    cout << "main()" << endl;

    pointer_data(3);
    //pointer_arithmetic_ints();


    pointer_fun(6,3);
    short* ptrA = new short(3);
    short* ptrB = new short(6);
    short ans = greater_val(ptrA, ptrB);
    cout << ans << "\n";
    pointer_arithmetic_chars();

}

/* Creates two integer pointers named ptrA and ptrB that point to ints a and b, respectively.
 * Prints to terminal the values of the ints at the pointers. Then, prints to terminal the value of the ints at the pointer locations.*/
void pointer_fun(int a, int b)
{
    int* ptrA = new int(a);
    int* ptrB = new int(b);

    cout << "Value at pointer A: " << *ptrA <<"\n";
    cout << "Value at pointer B: " << *ptrB <<"\n";
    cout << "Pointer location A: " << ptrA  <<"\n";
    cout << "Pointer location B: " << ptrB  <<"\n";


    //follow-up question; how far away, in bytes, is location of ptrA versus location of ptrB? How many bytes is an int stored in?
    cout << "Distance between pointer A and pointer B: " << ptrB - ptrA << "\n";
    cout << "Int size (bytes): "<< sizeof(a) << endl;
}

void pointer_arithmetic_chars()
{
    char course[] = "Programming for Engineers";
    char *pc = course;

    int length = sizeof(course)/sizeof(char);

    for(int i=0; i<length; i++)
    {
        cout << *pc;
        ++pc;

    }
}

short greater_val(short * ptrA, short * ptrB)
{
    if (*ptrA >= *ptrB)
        return *ptrA;
    else
        return *ptrB;
}

/* prints out pointer location in hex, decimal, and binary */
void pointer_data(int a)
{
    int * ptrA = &a;
    cout << "ptrA value of int: " << *ptrA << endl;
    cout << "ptrA virtual memory location: "<< endl;
    cout << "    (hexadecimal): " << ptrA << endl;
    cout << "    (decimal)    : " << (long) ptrA << endl;
    cout << "    (binary)     : " <<  bitset<64>((long) ptrA) << '\n' << endl;

}

/* prints out ints and pointer addresses */
void pointer_arithmetic_ints()
{
    int array_of_ints[3] = {10, 100, 200};
    int *ptr;

    // let us have array address in pointer.
    ptr = array_of_ints;
    int num_elements = sizeof(array_of_ints) / sizeof(int);

    for (int i = 0; i < num_elements; i++) {
        cout << "Address of var[" << i << "] = ";
        cout << ptr << endl;

        cout << "Value of var[" << i << "] = ";
        cout << *ptr << endl;

        // point to the next location
        ptr++;
    }
}

void add_student(Student A) {
    string * ptrA = new string();
}
void remove_student() {

}