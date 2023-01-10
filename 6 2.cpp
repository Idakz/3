

#include <iostream>
using namespace std;
int main() {
    double income;
    double add;
    double expense=0;
    for(int i=0;i<12;i++)
    {
        cout<<"\nEnter the income : ";
        cin>>income;
        add=(income*(2.0/5))/100;
        cout<<"\n"<<income<<"\t"<<add;
        expense=expense+add;
    }
    cout<<"\nThe total expense is :"<<expense;
    return 0;
}