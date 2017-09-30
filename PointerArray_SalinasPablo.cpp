#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;
float averageScore(int sum, int size);
void Sortscores(int *score, int size);

int main() {
	const int size = 5;
	int testscore[size];
	int *score = testscore;
	float sum=0.0;

	for (int i = 0; i < size; i++) {
		cout << "Please enter a test score #" << i+1 <<  " : ";
		cin >> score[i];
		while (score[i] < 0){
			cout << "Incorrect Test Score!!!" << endl << "Please enter a test score:";
			cin >> score[i];
		}
		
	}

	cout << endl;
	cout << "Your test scores were: ";
	for (int i = 0; i < size; i++) {
		if (i < 4) {
			cout << score[i] << ", ";
		}
		if (i == 4) {
			cout << score[i];
		}

	}

	cout << endl << endl;
	Sortscores(score, size);
	cout << "Your Sorted test scores are : ";
	for (int i = 0; i < size; i++) {
		if (i < 4) {
			cout << score[i] << ", ";
		}
		if (i == 4) {
			cout << score[i];
		}

	}
	
	cout << endl << endl;
	
	for (int i = 0; i < size; i++) {
		sum += score[i];
	}


	cout << fixed << showpoint << setprecision(1);
	cout << "Your average score is: " << averageScore(sum, size) << endl;

	system("pause");

	return 0;
}

void Sortscores(int *score, int size) {
	
	int holder;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size - 1; j++) {
			if (score[j] > score[j + 1]) {
				holder = score[j + 1];
				score[j + 1] = score[j];
				score[j] = holder;


			}
		}
	}
}


float averageScore(int sum, int size) {
	float average;
	

	average = sum / size;

	return average;
}
