
#include <iostream>
#include <cmath>

using namespace std;
// #21
float ReadSercumfrance()
{
	float Sercumfrance;

	cout << "Enter circle sercumfrance \n";
	cin >> Sercumfrance;

	return Sercumfrance;
}

float CircleAreaBySercumfrance(float Sercumfrance)
{
	const float Pi = 3.14;
	
	float Area;

	Area = (pow(Sercumfrance, 2) / (4 * Pi));

	return Area;
}

void PrintCircleArea(float Area)
{
	cout << "Circle Area = " << Area;
}

// #22
void ReadTriangleSideandBase(float& A , float& B)
{
	cout << "Enter triangle side\n";
	cin >> A;

	cout << "Enter triangle base\n";
	cin >> B;
}

float CalculateCircleAreaByItriangle(float A , float B)
{

	const float Pi = 3.14;

	float Area = Pi * (pow(B, 2) / 4) * ((2 * A - B) / (2 * A + B));

	return Area;
}

// Using already created function (PrintCircleArea) , to print the result

// #23
void ReadTriangleSides(float& A, float& B, float& C)
{
	cout << "Enter triangle side A\n";
	cin >> A;

	cout << "Enter triangle side B\n";
	cin >> B;

	cout << "Enter triangle side C\n";
	cin >> C;
}

float CalculateCircleAreaDescribedByAtriangle(float A , float B , float C)
{

	const float Pi = 3.14159265358979323846;

	 float P;
	 P = (A + B + C) / 2;

	 float T;
	  T = (A * B * C) / ( 4 * sqrt( P * (P - A) * (P - B) * (P - C) ));

	  float Area = Pi * pow(T, 2);  

	
	  return Area;
}

// Using already created function (PrintCircleArea) , to print the result

// A genaric function to validate number in range
//int ReadAge()
//{
//	int Age;
//	cout << "Enter your age \n";
//	cin >> Age;
//
//	return Age;
//}
//
//bool ValidateNumberBetweenRange(int Number , int From , int TO)
//{
//	return (Number >= From && Number <= TO);
//}
//
//void PrintAge(int Age)
//{
//	if (ValidateNumberBetweenRange(Age, 18, 45))
//		cout << "Valid Age " << Age << "\n";
//	else
//		cout << "Invalid Age " << Age << "\n";
//}

// #24
int ReadAge()
{
	int Age;
	cout << "Enter your age, must be between 18 and 45\n";
	cin >> Age;

	return Age;
}

bool ValidateNumberBetweenRange(int Number , int From , int To)
{
	return (Number >= From && Number <= To);
}

int ReadAgeWhileNotInRange()
{
	int Age = 0;

	do
	{
		Age = ReadAge();

	} while (!ValidateNumberBetweenRange(Age , 18 , 45));

	return Age;
}

void PrintAge(int Age)
{
	cout << "Your age is valid  " << Age << "\n";
}

int main()
{
	// #21
	//PrintCircleArea(CircleAreaBySercumfrance(ReadSercumfrance()));

	// #22
	/*float ITriangleSide, ITriangleBase;
	ReadTriangleSideandBase(ITriangleSide , ITriangleBase);
	
	PrintCircleArea(CalculateCircleAreaByItriangle(ITriangleSide , ITriangleBase));*/

	// #23
	/*float TriangleSideA, TriangleSideB, TriangleSideC;
	ReadTriangleSides(TriangleSideA, TriangleSideB, TriangleSideC);

	PrintCircleArea(CalculateCircleAreaDescribedByAtriangle(TriangleSideA, TriangleSideB, TriangleSideC));*/

	// A genaric function to validate number in range
	//PrintAge(ReadAge());

	// #24
	//PrintAge(ReadAgeWhileNotInRange());
}
