#include <iostream>
#include <math.h>
using namespace std;

double a,b;
int z;
void arthimetic(double, double);
void Power(float,float);
void Sin(float);
void Square(float);
void Cos(float);
void Tan(float);
void Log(float);
void Baselog(float);

int main()
{

    //system("cls");
    system("clear");

    menu:

    cout << endl;
    cout<<"\t                 \t SCIENTIFIC CALCULATOR       "<<endl;
    cout<<"\t               ##***************MENU***************##"<<endl;
    cout<<"\t               ||\t press '1' for arthimetic  ||"<<endl;
    cout<<"\t               ||\t Press '2' for Power:      ||"<<endl;
    cout<<"\t               ||\t Press '3' for square root:||"<<endl;
    cout<<"\t               ||\t Press '4' for Sin:        ||"<<endl;
    cout<<"\t               ||\t Press '5' for Cos:        ||"<<endl;
    cout<<"\t               ||\t Press '6' for Tan:        ||"<<endl;
    cout<<"\t               ||\t Press '7' for natural Log:||"<<endl;
    cout<<"\t               ||\t Press '8' for Base Log:   ||"<<endl;
    cout<<"\t               ##**********************************##"<<endl;


    cin>>z;

    switch(z)
    {

        case 1:
            cout<<"enter the first number"<<endl;
            cin>>a;
            cout<<"enter the second number"<<endl;
            cin>>b;
            arthimetic(a,b);
            break;


        case 2:
            cout<<"Enter the Number for Calculating its Power: "<<endl;
            cin>>a;
            cout<<"Enter the Power for a Number: "<<endl;
            cin>>b;
            Power(a,b);
            break;

        case 3:
            cout<<"Enter the Number for Calculating Square: "<<endl;
            cin>>a;
            Square(a);
            break;

        case 4:
            cout<<"Enter the Number for Calculating SIN: "<<endl;
            cin>>a;
            Sin(a);
            break;

        case 5:
            cout<<"Enter the Number for Calculating COS: "<<endl;
            cin>>a;
            Cos(a);
            break;

        case 6:
            cout<<"Enter the Number for Calculating TAN: "<<endl;
            cin>>a;
            Tan(a);
            break;

        case 7:
            cout<<"Enter the Number for Calculating LOG: "<<endl;
            cin>>a;
            Log(a);
            break;

        case 8:
            cout<<"Enter the Number for Calculating LOG WITH BASE 10: "<<endl;
            cin>>a;
            Baselog(a);
            break;
        default:
        	cout<<"invalid choice!"<<endl;
        	break;
    }

    int cont;
    askcont:
    cout<<"do you want to continue? \n press 1 to continue \n press 0 to exit"<<endl;
    cin>>cont;
    if(cont==1)
    {
       // system("cls");
        system("clear");
        goto menu;
    }
    else if(cont==0)
    {

        cout<<"*******************************************"<<endl;
        cout<<"||                                       ||"<<endl;
        cout<<"||      scientific calculator closed!    ||"<<endl;
        cout<<"||                                       ||"<<endl;
        cout<<"*******************************************"<<endl;

        return 0;
    }
    else
    {
        cout<<"invalid choice \n";
        goto askcont;
    }
}

void arthimetic (double x, double y)
{
double result;
char op;

cout<<"  +   for addition"<<endl;
cout<<"  -   for subtraction"<<endl;
cout<<"  *   for multiplication"<<endl;
cout<<"  /   for division"<<endl;
cin>>op;

switch(op)
{
    case '+':
        result= x+y;
        cout<<"the result is \t"<<result<<endl;
        break;
    case '-':
        result= x-y;
        cout<<"the result is \t"<<result<<endl;
        break;
    case '*':
        result= x*y;
        cout<<"the result is \t"<<result<<endl;
        break;
    case '/':
        result= x/y;
        cout<<"the result is \t"<<result<<endl;
        break;
    default:
        cout<<"invalid operation"<<endl;
        break;
}
}

void Power(float x,float y)
{
    float p;
    p = pow(x,y);
    cout<<"Power: "<<p<<endl;
}

void Sin(float x)
{
    float s;
    s = sin(x);
    cout<<"Sin: "<<s<<endl;
}

void Square(float x)
{
    float sq;
    sq = sqrt(x);
    cout<<"Square of a Given Value is: "<<sq<<endl;
}

void Cos(float x)
{
    float c;
    c = cos(x);
    cout<<"COS: "<<c<<endl;
}

void Tan(float x)
{
    float t;
    t = tan(x);
    cout<<"TAN: "<<t<<endl;
}

void Log(float x)
{
    float l;
    l = log(x);
    cout<<"Natural Logarithm: "<<l<<endl;
}

void Baselog(float x)
{
    float bl;
    bl = log10(x);
    cout<<"LOG with Base 10: "<<bl<<endl;
}


// github Beklg
// this code is made for first year school project
