#include <iostream>
#include <cstdio>


using namespace std;


typedef const float cf;



int main(int argc, char* argv[])
{

	cf Xi[] = { -1.0, 0.0, 1.0, 2.0 },
		Fx[] = { 20, -5, 6, 25/*1.25, -2.25, 16.25, 28.75*/ };

	float koefLagran{ 0.0f }, // for each point
		testX{ 0.0f },
		testY{ 0.0f };


	printf("Xi |\t");
	for (int i = 0; i < 4; i++) 
		printf("%g\t", Xi[i]);
	cout << "|\n";

	printf("Fx |\t");
	for (int i = 0; i < 4; i++)
	printf("%g\t", Fx[i]);
	cout << "|\n\n";

	cout << "Your X: ";
	cin >> testX;

	for (int i = 0; i <= 3; i++){
		koefLagran = 1;

		for (int j = 0; j <= 3; j++)
			if (i != j)
				koefLagran = koefLagran * ((testX - Xi[j]) / (Xi[i] - Xi[j]));


		testY = testY + Fx[i] * koefLagran;

	}

	cout << "F(x) = " << testY;

	return 0;
}