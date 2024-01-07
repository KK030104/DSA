#include <iostream>
using namespace std;



int FirstOccurance (int arr[] , int n , int key) {

    int start = 0;
    int end = n-1;

    int mid = start + (end - start)/2;
    int ans = -1;

    while (start <= end) {

        if (arr[mid] == key){
            ans = mid;
            end = mid - 1;

        }

        else if(key > arr[mid]) {
            start = mid +1;

        }
        else if (key < arr[mid]) {
            end = mid - 1;

        }
        mid = start + (end - start)/2;
    }
    return ans;
}

int LastOccurance (int arr[] , int n , int key) {

    int start = 0;
    int end = n-1;

    int mid = start + (end - start)/2;
    int ans = -1;

    while (start <= end) {

        if (arr[mid] == key){
            ans = mid;
            start = mid + 1;

        }

        else if(key > arr[mid]) {
            start = mid +1;

        }
        else if (key < arr[mid]) {
            end = mid - 1;

        }
        mid = start + (end - start)/2;
    }
    return ans;
}

int main() {

    int even[8] = {2, 4, 7, 7,7, 7,8, 10};

    cout<< FirstOccurance(even , 8,7) << endl;
    cout << LastOccurance(even , 8,7) <<endl;



    return 0;
}