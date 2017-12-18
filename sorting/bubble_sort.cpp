/*
          Algorithm :  Bubble Sort
          In place sorting algorithm                                          */



#include<iostream>
#include<vector>
using namespace std;

vector<int> BubbleSort(vector<int> &arr){
  int n = arr.size();
  for(int i = n-1; i >= 0; i--){
    int check = 1;
    for(int j = 0; j < i ; j++){
      if( arr[j+1] < arr[j]){
        int tmp = arr[j+1];
        arr[j+1] = arr[j];
        arr[j] = tmp;
        check = 0;
      }
    }
    if( check ){
      return arr;
    }
  }
  return arr;
}

int main(){
  int n;
  cout << "Enter the number of elements you want to sort" << endl;
  cin >> n;
  vector<int> arr;
  while(n > 0){
    int element;
    cin >> element;
    arr.push_back(element);
    n--;
  }
  BubbleSort(arr);
  for(int i = 0; i < arr.size() ; i++){
    cout << arr[i] << endl;
  }

}
