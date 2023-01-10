#include <iostream>
#include <cmath>
using namespace std;

double scan_data(char&, double&);
void do_next_op(char, double, double&);




double scan_data(char& op, double& num)
{
    double accum = 0.0;

    while(op != 'q')
    {

        cin >> op;
        cin >> num;


        do_next_op(op, num, accum);
        if(op != 'q')
        {
            cout << "Result as far is " << accum << endl;

        }
        else
        {
            cout << "Final result is " << accum << endl;
        }


    }
    return accum;

}

void do_next_op(char op, double num, double& accum)
{

    if(num == 0)
    {
        cout << "Error: division by zero" << endl;
    }

    if(op == '+')
    {
        accum += num;
    }
    else if(op == '-')
    {
        accum -= num;
    }
    else if(op == '*')
    {
        accum *= num;
    }
    else if(op == '/')
    {
        accum /= num;
    }
    else if(op == '^')
    {
        accum = pow(accum, num);
    }
    else
    {
        cout << "Error: invalid operand" << endl;
    }

}
int main()
{
    double accum = 0.0;
    char op;
    double num;
    accum = scan_data(op, num);
    do_next_op(op, num, accum);






    return 0;
}
