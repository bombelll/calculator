#include <iostream>
using namespace std;

int main()
{
    while(true){
	    float firstNumber, secondNumber;
	    char symbol;
	    cout << "Podaj pierwsza liczbe:";
	    cin >> firstNumber;
	    cout << "Podaj druga liczbe:";
	    cin >> secondNumber;
	    cout << "Podaj symbol:";
	    cin >> symbol;
	    
	    switch(symbol)
	    {
	        case '+':
	        cout << firstNumber << " + "<< secondNumber << " = "<< firstNumber + secondNumber<<endl;
	        break;
	        
	        case '-':
	        cout << firstNumber << " - "<< secondNumber << " = "<< firstNumber - secondNumber<<endl;
	        break;
	        
	        case '*':
	        cout << firstNumber << " * "<< secondNumber << " = "<< firstNumber * secondNumber<<endl;
	        break;
	        
	        case '/':
	        if(secondNumber == 0){
	            cout << "Nie mozna dzielic przez zero."<<endl;
	        }else{
	            cout << firstNumber << " / "<< secondNumber << " = "<< firstNumber / secondNumber<<endl;
	        }
	        break;
	        
	        default:
	        cout << "Symbol jest niepoprawny"<<endl;
	        break;
	    }
    }
    return 0;
}
