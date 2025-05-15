#include "exercises.h"

// -------------------------------
// Functions that return a single value
// -------------------------------

int calcSum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int numeros[] = {1, 2, 54, 28, 11, 96};
    int size = sizeof(numeros) / sizeof(numeros[0]);
    int resultado = calcSum(numeros, size);
    printf("La suma de los elementos del arreglo es: %d\n", resultado);
    return 0;

}

int findMax(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

float calcAverage(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return (float)sum / size;
}

int countEvens(int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            count++;
        }
    }
    return count;
}


int sumFirstLast(int arr[], int size) {
    if (size <= 0) return 0; 
    return arr[0] + arr[size - 1];
}

int findMin(int arr[], int size) {
    if (size <= 0) return 0; 
    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int subtractArraysSum(int arr1[], int arr2[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr1[i] - arr2[i];
    }
    return sum;
}

int mergeArraysSum(int arr1[], int size1, int arr2[], int size2) {
    int sum = 0;

    for (int i = 0; i < size1; i++) {
        sum += arr1[i];
    }

    for (int i = 0; i < size2; i++) {
        sum += arr2[i];
    }
    return sum;
}
   

int productArray(int arr[], int size) {
    int product = 1;  

    for (int i = 0; i < size; i++) {
        product *= arr[i]; 
    }

    return product;
}

// -------------------------------
// Function that returns multiple values via pointer
// -------------------------------

void calcSumAverage(int arr[], int size, int *sum, float *average) {
    *sum = 0;  
    for (int i = 0; i < size; i++) {
        *sum += arr[i];  
    }
    
    *average = (float)(*sum) / size;
}
