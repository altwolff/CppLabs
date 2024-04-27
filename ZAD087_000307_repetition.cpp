// ----------- ZAD307 -----------
//(repetition) Dopisz brakujące klasy
//Nie używaj drukowania
//Zwróć uwagę co masz drukować
//./licz + 2 5 ➞ WYDRUKUJE: Wynikiem dodawania jest 7

#include <iostream>
;;
// ROZWIĄZANIE POCZATEK
class MathOperation{
    public:
    std::string result;
    ~MathOperation(){}
    virtual void Execute(double num1, double num2) = 0;
    std::string GetResult() {return result;}
};
class AddOperation : public MathOperation{
    public:
    void Execute (double num1, double num2) {
        result = "Wynikiem dodawania jest ";
        result += std::to_string(num1+num2);
    }
};
class SubtractOperation : public MathOperation{
    public:
    void Execute (double num1, double num2) {
        result = "Wynikiem odejmowania jest ";
        result += std::to_string(num1-num2);
    }
};
class DivideOperation : public MathOperation{
    public:
    void Execute (double num1, double num2) {
        result = "Wynikiem dzielenia jest ";
        result += std::to_string(num1/num2);
    }
};
class MultiplyOperation : public MathOperation{
    public:
    void Execute (double num1, double num2) {
        result = "Wynikiem mnozenia jest ";
        result += std::to_string(num1*num2);
    }
};
// ROZWIĄZANIE KONIEC
;;
int main(int argc, char* argv[]) {
	if (argc != 4) {
		std::cerr << "Usage: [operation] [number1] [number2]" << std::endl;
		return 1;
	}

	char operation = argv[1][0];  // Argument operacji to pojedynczy znak
	double num1 = std::stod(argv[2]);
	double num2 = std::stod(argv[3]);

	MathOperation* mathOperation = nullptr;

	switch (operation) {
		case '+':
			mathOperation = new AddOperation();
			break;
		case '-':
			mathOperation = new SubtractOperation();
			break;
		case '*':
			mathOperation = new MultiplyOperation();
			break;
		case '/':
			if (num2 == 0) {
				std::cerr << "Error: Division by zero." << std::endl;
				return 1;
			}
			mathOperation = new DivideOperation();
			break;
		default:
			std::cerr << "Invalid operation." << std::endl;
			return 1;
	}

	mathOperation->Execute(num1, num2);
	std::cout << mathOperation->GetResult() << std::endl;

	delete mathOperation;
	return 0;
}