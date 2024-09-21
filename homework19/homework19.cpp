#include <iostream>

using namespace std;

//1-ci
//int countNumbers(int arr[], int size) 
//{
//    int count = 0;
//    for (int i = 0; i < size; ++i) 
//    {
//        if (arr[i] % 3 == 0 && arr[i] % 5 != 0) 
//        {
//            count++;
//        }
//    }
//    return count;
//}






//2-ci
//int menfidensonracem(int arr[], int size) {
//    int sum = 0;
//    bool foundNegative = false;
//    for (int i = 0; i < size; ++i) 
//    {
//        if (foundNegative) {
//            sum += arr[i];
//        }
//        if (arr[i] < 0 && !foundNegative)
//        {
//            foundNegative = true;
//        }
//    }
//    return sum;
//}




//3-cu
//int musbettensonragelencem(int arr[], int size)
//{
//    int sum = 0;
//    bool foundPositive = false;
//    for (int i = 0; i < size; ++i) 
//    {
//        if (foundPositive) sum += arr[i];
//        if (arr[i] > 0 && !foundPositive) foundPositive = true;
//    }
//    return sum;
//}



//4-cu
//void findMinMax(int arr[], int size, int& minValue, int& maxValue)
//{
//    minValue = arr[0];
//    maxValue = arr[0]; 
//    for (int i = 1; i < size; ++i)
//    {
//        if (arr[i] < minValue) minValue = arr[i];
//        if (arr[i] > maxValue) maxValue = arr[i];
//    }
//}




//5-ci
//void hesablama(int arr[], int size, double& birreqemli, double& ikireqemli, double& ucreqemli) {
//    int birct = 0;
//    int ikict = 0;
//    int ucct = 0;
//    for (int i = 0; i < size; ++i) {
//        if (arr[i] < 10) {
//            birct++;
//        }
//        else if (arr[i] < 100) {
//            ikict++;
//        }
//        else {
//            ucct++;
//        }
//    }
//    birreqemli = (birct * 100.0) / size;
//    ikireqemli = (ikict * 100.0) / size;
//    ucreqemli = (ucct * 100.0) / size; 
//}


int main()
{
    //1-ci
    //srand((time(0)));
    //const int size = 10;
    //int numbers[size];
    //for (int i = 0; i < size; ++i) {
    //    numbers[i] = rand() % 100 + 1;
    //}
    //int count = countNumbers(numbers, size);
    //cout << "Tesadufi ededler: ";
    //for (int i = 0; i < size; ++i) {
    //    cout << numbers[i] << " ";
    //}
    //cout << "3-e bolunub, 5-e bolunmeyen ededlerin sayi: " << count << endl;
    //return 0;


    //2-ci
    //srand((time(0)));
    //const int size = 10;
    //int numbers[size];
    //for (int i = 0; i < size; ++i) {
    //    numbers[i] = rand() % 41 - 10;
    //}
    //int totalSum = menfidensonracem(numbers, size);
    //cout << "Tesadufi ededler: ";
    //for (int i = 0; i < size; ++i) {
    //    cout << numbers[i] << " ";
    //}
    //cout << "Birinci menfi ededden sonra gelen ededlerin cemi: " << totalSum << endl;
    //return 0;


    //3-cu
    //srand((time(0)));
    //const int size = 10;
    //int numbers[size];
    //for (int i = 0; i < size; ++i) {
    //    numbers[i] = rand() % 51 - 30;
    //}
    //int totalSum = musbettensonracem(numbers, size);
    //cout << "Tesadufi ededler: ";
    //for (int i = 0; i < size; ++i) {
    //    cout << numbers[i] << " ";
    //}
    //cout << "Birinci musbet ededden sonra gelen ededlerin cemi: " << totalSum << endl;
    //return 0;



    //4-cu
    //srand((time(0)));
    //const int size = 20;
    //int numbers[size];
    //for (int i = 0; i < size; ++i) {
    //    numbers[i] = rand() % 101 - 50;
    //}
    //int minValue, maxValue;
    //findMinMax(numbers, size, minValue, maxValue);
    //cout << "Tesadufi ededler: ";
    //for (int i = 0; i < size; ++i) {
    //    cout << numbers[i] << " ";
    //}
    //cout << "\nMinimum dyer: " << minValue << endl;
    //cout << "Maksimum deyer: " << maxValue << endl;
    //return 0;



    //5-ci
    //srand((time(0)));
    //const int size = 20;
    //int numbers[size];
    //for (int i = 0; i < size; ++i) 
    //{
    //    numbers[i] = rand() % 200 + 1;
    //}
    //double birreqemli, ikireqemli, ucreqemli;
    //hesablama(numbers, size, birreqemli, ikireqemli, ucreqemli);
    //cout << "Tesadufi ededler: ";
    //for (int i = 0; i < size; ++i) {
    //    cout << numbers[i] << " ";
    //}
    //cout << endl;
    //cout << "1 reqemli ededlerin faizi: " << birreqemli << "%" << endl;
    //cout << "2 reqemli ededlerin faizi: " << ikireqemli << "%" << endl;
    //cout << "3 reqemli ededlerin faizi: " << ucreqemli << "%" << endl;
    //return 0;
}
