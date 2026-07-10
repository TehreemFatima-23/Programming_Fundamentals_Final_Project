# include <iostream>
using namespace std;
int main(){
    int iNum1, iNum2;
    double dNum1, dNum2;
    char op;
    int choice;

    cout<<"Enter the choice for integer or decimal numbers:"<<endl;
    cout<<"1.Integer"<<endl<<"2.Decimal"<<endl;
    cin>>choice;

    cout<<"Now enter the operands: ";

    if(choice==1){
    cin>>iNum1>>iNum2;
    }
    else{
        cin>>dNum1>>dNum2;
    }

    cout<<"Enter the operator: ";
    cin>>op;

    switch(op){
        case '+':
        if(choice==1)
        cout<<"Sum: "<<iNum1+iNum2<<endl;
        else
        cout<<"Sum: "<<dNum1+dNum2<<endl;
        break;

        case '-':
        if(choice==1)
        cout<<"Difference: "<<iNum1-iNum2<<endl;
        else
        cout<<"Difference: "<<dNum1-dNum2<<endl;
        break;

        case '/':
        if(choice==1){
            if(iNum2==0)
            cout<<"Math error";
            else
            cout<<"Divide: "<<iNum1/iNum2<<endl;
        }
        else{
            if(dNum2==0.0)
            cout<<"Math error";
            else
            cout<<"Divide: "<<dNum1/dNum2<<endl;
        }
        break;

        case '*':
        if(choice==1)
        cout<<"Multiply: "<<iNum1*iNum2<<endl;
        else
        cout<<"Multiply: "<<dNum1*dNum2<<endl;
        break;

        case '%':
        if(choice==1){
            if(iNum2==0)
            cout<<"Math error";
            else
            cout<<"Remainder: "<<iNum1%iNum2<<endl;
        }
        else
        cout<<"\"Modulus does not work for decimals\"";
        break;
        
        default:
        cout<<"Invalid case"<<endl;
    
    }

    return 0;

}